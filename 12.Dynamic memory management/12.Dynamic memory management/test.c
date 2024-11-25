#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//C语言引入了动态内存开辟，让程序员自己可以申请和释放空间
//一、malloc和free
//这个函数向内存申请一块连续可以的空间，并返回指向这块空间的指针
//如果开辟成功，则返回一个指向开辟好的空间的指针
//如果开辟失败，则返回一个NULL指针
//返回值的类型是void*
//int main()
//{
//	//申请10个整型空间
//	int* p = (int*)malloc(sizeof(int) * 10);
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
//	free(p);//p指向的空间不属于当前程序，但是还能找到这块空间
//	p = NULL;
//
//	return 0;
//}
//malloc申请的空间和数组的空间有什么区别呢？
//动态内存的大小是可以调整的
//开辟的位置不同
//malloc开辟的位置在堆区，数组申请的空间在栈区
//malloc和free最好成对使用




//二、calloc和realloc
//int main()
//{
//	//申请10个整型的空间
//	//calloc会默认将申请的空间设置为0
//	int* p = (int*)calloc(10, sizeof(int));//申请10个大小为int类型的空间
//	if (p == NULL)
//	{
//		//申请失败
//		perror("calloc");
//		return 1;
//	}
//
//	//使用空间
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	//释放
//	free(p);
//	p = NULL;
//
//	return 0;
//}


//realloc -- 调整
//返回值为调整之后内存起始位置
//realloc函数在调整空间时有两种情况
//①如果扩大之后内存空间足够 --> 直接追加空间
//②如果扩大之后内存空间不足 --> 在内存的堆区重新找一块新的满足大小的空间，将旧的数据拷贝到新的空间，释放旧空间，返回新空间的地址
//int main()
//{
//	//申请空间
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		perror("calloc");
//		return 1;
//	}
//
//	//使用空间
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	//调整空间，希望变成20个整型空间
//	int* ptr = (int*)realloc(p, 20 * sizeof(int));
//	if (ptr != NULL);
//	{
//		p = ptr;
//	}
//
//	//释放
//	free(p);
//	p = NULL;
//	return 0;
//}




//三、常见的动态内存错误
//1.对NULL指针的解引用操作
//int main()
//{
//	int* p = (int*)malloc(sizeof(int) * 10);
//	if (p == NULL)
//	{
//		return 1;
//	}
//	//使用 -- 如果不检查p，若p为空，则会出现错误
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	return 0;
//}


//2.对动态开辟内存空间的越界访问
//int main()
//{
//	int* p = (int*)malloc(sizeof(int) * 10);
//	if (p == NULL)
//	{
//		return 1;
//	}
//	
//	int i = 0;
//	for (i = 0; i < 40; i++)//err 越界访问
//	{
//		*(p + i) = i;
//	}
//	return 0;
//}


//3.对非动态开辟内存的释放
//int main()
//{
//	int a = 10;
//	int* p = &a;
//
//	free(p);//err p指向的不是动态开辟的空间
//	return 0;
//}


//4.使用free释放一块动态开辟内存的一部分
//int main()
//{
//	int* p = (int*)malloc(sizeof(int) * 10);
//	if (p == NULL)
//	{
//		return 1;
//	}
//	
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*p = i;
//		p++;
//	}
//
//	free(p);//err p指向的不是初始位置
//
//	return 0;
//}


//5.对同一块内存多次释放
//int main()
//{
//	int* p = (int*)malloc(sizeof(int) * 10);
//	if (p == NULL)
//	{
//		return 1;
//	}
//
//	//使用
//
//	free(p);
//
//	//...
//
//	free(p); //err p为野指针，对野指针释放
//	p = NULL;
//
//	return 0;
//}


//6.动态开辟内存忘记释放（内存泄漏）
//申请了空间，又没有释放，程序结束之前则无法使用这块内存，浪费了这块内存
//void test()
//{
//	int flag = 1;
//	int* p = (int*)malloc(100);
//	if (p == NULL)
//	{
//		return;
//	}
//
//	//使用..
//	if (flag)
//		return;
//
//
//	free(p);//err 没有释放内存
//	p = NULL;
//}
//int main()
//{
//	test();
//	return 0;
//}

