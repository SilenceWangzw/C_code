#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//一、指针变量和地址
//1.取地址操作符
//int main()
//{
//	int a = 20;//变量创建的本质其实是在内存中申请空间
//	向内存申请4个字节的空间，用来存放20这个数值
//	这4个字节，每个字节都有编号(地址)
//	变量的名字仅仅是给程序员看的，编译器不看名字，是通过地址找内存单元的
//	
//	int* pa = &a;//& -- 取地址操作符，拿到变量a的地址，拿到的是第一个字节的地址
//	pa是一个变量，这个变量pa是用来存放地址(指针)的
//	pa叫指针变量
//	int* 是pa的类型
//	*表示pa是指针变量
//	int表示pa指向的变量a的类型是int
//	return 0;
//}


//2.解引用操作符
//int main()
//{
//	int a = 20;
//	int* pa = &a;
//
//	*pa = 10;//* -- 解引用操作符(间接访问操作符)
//	printf("%d\n", a);
//	return 0;
//}


//3.指针变量的大小
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	//指针变量是用来存放地址的，一个地址的存放需要多大空间呢？那么指针变量的大小就是多大
//	printf("%zd\n", sizeof(p));
//	//32位机器 -- 4个字节
//	//64位机器 -- 8个字节
//
//	return 0;
//}


//指针变量的大小和类型无关，只要指针类型的变量，在相同的平台下，大小都是相同的
//int main()
//{
//	printf("%zd\n", sizeof(char*));
//	printf("%zd\n", sizeof(short*));
//	printf("%zd\n", sizeof(float*));
//	printf("%zd\n", sizeof(double*));
//	printf("%zd\n", sizeof(int*));
//	return 0;
//}




//二、指针变量类型的意义
//1.指针的解引用
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	*pa = 0;
//
//	return 0;
//}


//int main()
//{
//	int a = 20;
//	char* pa = &a;
//	*pa = 0;
//
//	return 0;
//}
//结论：指针的类型决定了，对指针解引用的时候有多大的权限（一次能操作几个字节）


//2.指针+-整数
//int main()
//{
//	int a = 20;
//	int* pa = &a;
//	char* pc = &a;
//	printf("&a = %p\n", &a);
//	printf("pa = %p\n", pa);
//	printf("pc = %p\n", pc);
//
//	printf("&a+1 = %p\n", &a + 1);
//	printf("pa+1 = %p\n", pa + 1);
//	printf("pc+1 = %p\n", pc + 1);
//
//	return 0;
//}
//总结：指针的类型决定了指针向前或者向后走一步有多大（距离）
//int* pa;   pa+1 ---> pa+1*sizeof(int)
//			 pa+n ---> pa+n*sizeof(int)
//char* pc;  pc+1 ---> pc+1*sizeof(char)
//           pc+n ---> pc+n*sizeof(char)


//3.void* 指针
//无具体类型的指针，这种类型的指针可以用来结束任意类型地址
//void*类型的指针变量不能直接进行解引用和+-操作
//int main()
//{
//	int a = 10;
//	char ch = 'w';
//
//	void* pv1 = &a;//int*
//	void* pv2 = &ch;//char*
//
//	return 0;
//}
//一般void*类型的指针是使用在函数参数的部分，用来接收不同类型数据的地址
//这样的设计可以实现泛型编程的效果，使得一个函数来处理多种类型的数据