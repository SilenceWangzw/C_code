#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//一、为什么要有动态内存分配
//有时候我们需要的空间大小在程序运行的时候才能知道
//那数组编译时开辟空间的方式就不能满足了
//C语言引入了动态内存开辟，让程序员自己可以申请和释放空间，就比较灵活了




//二、malloc和free
//1.malloc
//这个函数向内存申请一块连续可用的空间，并返回指向这块空间的指针
//参数的单位是字节
//申请空间成功，返回起始地址
//申请空间失败，返回NULL
//int main()
//{
//	//申请10个整型的空间
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		//空间开辟失败
//		perror("malloc");
//		return 1;
//	}
//	//可以使用这40个字节的空间
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i + 1;
//	}
//	return 0;
//}
//malloc申请的空间和数组的空间有什么区别呢？
//①动态内存的大小是可以调整的
//②开辟空间的位置不一样
//栈区：局部变量、函数的形参
//堆区：动态内存、malloc、free、calloc、realloc
//静态区：全局变量、static修饰的静态变量


//2.free
//free用来释放动态开辟的空间
//int main()
//{
//	//申请10个整型的空间
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		//空间开辟失败
//		perror("malloc");
//		return 1;
//	}
//	//可以使用这40个字节的空间
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i + 1;
//	}
//
//	//释放
//	//如果不释放的话，程序结束的时候也会被操作系统自动回收
//	free(p);//p指向的空间不属于当前用户，但是还能找到这个空间
//	p = NULL;
//
//	return 0;
//}
//注：malloc和free最好成对使用




//三、calloc和realloc
//1.calloc
//开辟的同时初始化为0
//int main()
//{
//	//申请10个整型的空间
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		perror("calloc");
//		return 1;
//	}
//	//使用空间
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	//释放
//	free(p);
//	p = NULL;
//
//	return 0;
//}


//2.realloc
//对内存空间调整，在调整空间的时候，有两种情况
//①原空间后面的空间足够：直接扩，返回原来的地址
//②原空间后面的空间不足：在内存的堆区找一块新的满足大小的空间，将旧的数据拷贝到新的空间，会释放旧的空间，返回新的地址
//int main()
//{
//	//申请10个整型的空间
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		perror("calloc");
//		return 1;
//	}
//	//使用空间
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	//调整空间--希望变长20个整型
//	//最好不要用原来的p接收，万一开辟空间失败返回空指针，原来的数据也丢失了
//	int* ptr = (int*)realloc(p, 20 * sizeof(int));
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//	//使用
//	//....
//	
//	//释放
//	free(p);
//	p = NULL;
//
//	return 0;
//}


//realloc也可以用于开辟空间
//int main()
//{
//	int* p = (int*)realloc(NULL, 40);//等价于malloc
//	return 0;
//}




//四、常见的动态内存的错误
//1.对NULL指针的解引用操作
//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));//有可能为空指针
//
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//
//	//使用
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//
//	free(p);
//	p = NULL;
//	return 0;
//}


//2.对动态开辟空间的越界访问
//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 40; i++)
//	{
//		*(p + i) = i;//越界访问
//	}
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}


//3.对非动态开辟内存使用free释放
//int main()
//{
//	int a = 10;
//	int* p = &a;
//
//	free(p);//err
//	p = NULL;
//
//	return 0;
//}


//4.使用free释放一块动态开辟内存的一部分
//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//
//	//使用
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*p = i;
//		p++;
//	}
//
//	free(p);//p已经不是指向起始位置了，只释放了一部分
//	p = NULL;
//	return 0;
//}


//5.对同一块动态内存多次释放
//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));//有可能为空指针
//
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//
//	//使用
//	//...
//
//	free(p);
//
//	free(p);//err，相当于释放野指针
//	p = NULL;
//
//	return 0;
//}


//6.动态开辟内存忘记释放（内存泄漏）
//void test()
//{
//	int flag = 1;
//	int* p = (int*)malloc(100);
//	if (p == NULL)
//	{
//		return 1;
//	}
//
//	//使用
//	if (flag)
//	{
//		return;
//	}
//
//	free(p);//没有释放，造成内存泄漏
//	p = NULL;
//}
//int main()
//{
//	test();
//
//	//......
//
//	return 0;
//}
