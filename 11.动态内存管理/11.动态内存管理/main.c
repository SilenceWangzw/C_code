#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<errno.h>
#include<string.h>
#include<stdlib.h>

//一、为什么存在动态内存分配
//int main()
//{
//	//已经掌握的内存开辟方式
//	int a = 10;//4个字节
//	int arr[10];//40个字节
//	return 0;
//}
//特点：
//①：空间开辟的大小是固定的
//②：数组在声明的时候，必须指定数组长度，它所需要的内存在编译时分配




//二、动态内存函数的介绍
//1.malloc和free
// void* malloc(size_t size)
//int main()
//{
//	int arr[10] = { 0 };
//	//动态内存开辟
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//使用
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	//没有free
//	//并不是说内存空间就不回收了
//	//当程序退出的时候，系统会自动回收内存空间
//	//内存泄露：空间开辟了不使用，也不还
//
//	free(p);
//	p = NULL; //释放之后p还是指向那个地址，防止野指针，将它置为NULL
//
//	return 0;
//}
//如果开辟成功，则返回一个指向开辟好空间的指针
//如果开辟失败，则返回一个NULL指针，因此malloc的返回值一定要做检查
//返回值的类型是void*，所以malloc函数并不知道开辟空间的类型，具体在使用的时候使用者自己来决定
//如果参数size为0，malloc的行为是标准是未定义，取决于编译器
//如果参数指向的空间不是动态开辟的，那free函数的行为是未定义的
//如果参数是NULL指针，则free函数则什么事都不做


//2.calloc
//void* calloc(size_t num , size_t size);
//int main()
//{
//	//开辟10个整型的空间
//	int* p = (int*)calloc(10, sizeof(int)); //开辟好之后会将内容初始化为0
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//打印
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


//3.realloc
//realloc函数的出现让动态内存管理更加灵活
//有时候发现过去申请的空间太小了，有时候又觉得申请的空间过大了，realloc函数就可以做到对动态开辟内存大小的调整
//void* realloc(void* ptr, size_t size);
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//使用
//	//初始化为：1 2 3 4 5 6 7 8 9 10
//	for (int i = 0; i < 10; i++)
//	{
//		*(p + i) = i + 1;
//	}
//	//扩容
//	//情况1：内存足够，直接追加
//	//情况2：内存不足，calloc会在堆区重新找一块连续的内存空间，并将原数据拷贝过去，返回一个新的起始地址
//	int* ptr = (int*)realloc(p, 80);//给p再追加上40个字节
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	free(p);
//
//	return 0;
//}


//int main()
//{
//	realloc(NULL, 40); //等价malloc(40)；
//	return 0;
//}




//三、常见的动态内存错误
//1.对NULL指针的解引用操作
//int main()
//{
//	int* p = (int*)malloc(40);
//	//万一p开辟失败得到空指针，则对空指针的解引用会出现问题
//	if (p == NULL)
//	{
//		return 1;
//	}
//	*p = 20;
//	free(p);
//	p = NULL;
//	return 0;
//}


//2.对动态开辟空间的越界访问
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i <= 10; i++) //越界
//	{
//		*(p + i) = i;
//	}
//
//	free(p);
//
//	return 0;
//}


//3.对非动态开辟内存使用free释放
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	free(p); //错误，p所指向的是栈区的空间，不是动态开辟的空间
//	p = NULL;
//	return 0;
//}


//4.使用free释放一块动态开辟内存的一部分
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 1;
//	}
//	//使用
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*p = i;
//		p++;
//	}
//
//	//释放
//	free(p); //错误，这个时候的p已经不是起始位置了，不能释放一部分
//	p = NULL;
//	return 0;
//}


//5.对同一块动态内存多次释放
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 1;
//	}
//	//....
//	free(p);
//	p = NULL; //free之后要把指针置空，不要对同一个空间释放两次
//	//....
//	free(p);
//
//	return 0;
//}


//6.动态开辟内存忘记释放（内存泄漏）
//void test()
//{
//	int* p = (int*)malloc(100);
//
//	int flag = 0;
//	scanf("%d", &flag);
//	if (flag == 5) //若输入5，提前返回，就没有执行free，导致p再也释放不了，会出现内存泄漏的问题
//	{
//		return;
//	}
//
//	free(p);
//	p = NULL;
//}
//int main()
//{
//	test();
//	return 0;
//}


//int* test()
//{
//	//开辟空间
//	int* p = (int*)malloc(100);
//	if (p == NULL)
//	{
//		return p;
//	}
//	//.....
//
//	return p;
//
//}
//int main()
//{
//	int* ret = test();
//	//忘记释放
//
//	return 0;
//}
//注：忘记释放不再使用的动态开辟的空间会造成内存泄漏，切记动态开辟的空间一定要释放，并且正确的释放