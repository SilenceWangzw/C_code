#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//一、数据类型介绍
//int main()
//{
//
//	return 0;
//}
//类型的意义：
//①：使用这个类型开辟内存空间的大小(大小决定了使用范围)
//②：如何看待内存空间的视角


//类型的基本归类：
//①：整型家族
//②：浮点型家族
//③：构造类型 -- 自定义类型
//		数组
//		struct 结构体类型
//		枚举
//		联合体
//④：指针类型
//⑤：空类型(void) -- 一般用于函数返回类型、函数参数、指针
//int main()
//{
//	int arr[10];// 类型是int [10] -- 所以是一种自定义类型
//	int arr2[5];// 类型是int [5]
//	return 0;
//}




//二、整型在内存中的存储
//1.原码、反码、补码
//int main()
//{
//	int a = -10;
//	//100000000000000000000000001010 -- 原码
//	//111111111111111111111111110101 -- 反码
//	//111111111111111111111111110110 -- 补码
//	//ff ff ff f6
//
//	return 0;
//}
//数据在内存中以二进制的形式存储
//整数的二进制有3种表示形式：原码、反码、补码
//正整数原码、反码、补码相同
//负整数原码、反码、补码要进行计算
//反码 = 原码符号位不变，其余按位取反
//补码 = 反码 + 1
//整数在内存中存储的是补码


//为什么内存中存储的是补码
//int main()
//{
//	//CPU没有减法器，只有加法器
//	// 1 - 1
//	// 1 + (-1)
//	//假设用原码来计算
//	//00000000000000000000000000000001
//	//10000000000000000000000000000001  +
//	//10000000000000000000000000000010  = -2
//	//会出错
//
//	//用补码计算
//	//00000000000000000000000000000001
//	//11111111111111111111111111111111  +
//	//100000000000000000000000000000000(舍弃一位) = 0
//
//	return 0;
//}


//2.大小端介绍
//大端字节序和小端字节序
//大端：把数据的低位字节序的内容存放在高地址处，高位字节序的内容存放在低地址处
//小端：把数据的低位字节序的内容存放在低地址处，高位字节序的内容存放在高地址处
//int main()
//{
//	int a = 0x11223344;
//	//在内存中：44 33 22 11
//	//当前编译器采取的是小端字节序
//	return 0;
//}


//笔试题：设计一个小程序来判断当前机器的字节序
//int main()
//{
//	int a = 1;
//	//大端： 00 00 00 01
//	//小端： 01 00 00 00
//	char* p = (char*)&a;
//	if (*p == 1)
//	{
//		printf("小端\n");
//	}
//	else {
//		printf("大端\n");
//	}
//
//	return 0;
//}


//练习1:
//int main()
//{
//	char a = -1;
//	//11111111111111111111111111111111 --  -1补码
//	//11111111
//	//11111111111111111111111111111111(整型提升) -- 补码
//	//10000000000000000000000000000001 -- 原码
//
//	signed char b = -1;
//	//11111111
//	//11111111111111111111111111111111(整型提升) -- 补码
//	//10000000000000000000000000000001 -- 原码
//
//	unsigned char c = -1;
//	//11111111
//	//00000000000000000000000011111111(整型提升) -- 补码(正数原反补相同)
//	
//	printf("a = %d,b = %d,c = %d", a, b, c);
//	return 0;
//}
//补充：
//①：char到底是signed char还是unsigned char？ -- C语言标准并没有规定，取决于编译器
//②：int是signed int
//③：short是signed short


//练习2：
//int main()
//{
//	char a = -128;
//	//10000000000000000000000010000000 -- 原码
//	//11111111111111111111111101111111 -- 反码
//	//11111111111111111111111110000000 -- 补码
//	//10000000
//	//11111111111111111111111110000000（整型提升）-- 补码(原反补相同)
//	//无符号数打印，则没有符号位
//	printf("%u\n", a);
//	return 0;
//}


//练习3:
//int main()
//{
//	char a = 128;
//	//00000000000000000000000010000000 -- 原反补相同
//	//1000000
//	//11111111111111111111111111000000（整型提升） -- 补码（原反补相同）
//	//无符号数打印，则无符号位，为正数
//	printf("%u\n", a);
//	return 0;
//}
//c补充：
//char 类型的取值范围
//有符号的char的取值范围是-127~128


//练习4：
//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	//11111111111111111111111111101100 -- (i)补码
//	//00000000000000000000000000001010   +
//	//------------------------------------------
//	//11111111111111111111111111110110 -- 补码
//	//10000000000000000000000000001001 -- 反码
//	//10000000000000000000000000001010 -- 原码 -- -10
//
//	printf("%d\n", i + j);
//
//	return 0;
//}


//练习5：
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--) //死循环，无符号数永远大于等于0
//	{
//		printf("%u\n", i);
//	}
//	return 0;
//}


//练习6：
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	// -1 -2 -3 ... -127 -128 127 126 125 ... 3 2 1 0 -1 -2 ... -127 -128 127 126 ...2 1 0
//	printf("%d", strlen(a)); //找到\0  ---> 0
//	return 0;
//}


//练习7：
//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++) //死循环，无符号char取值范围为0~255
//	{
//		printf("hello world\n");
//	}
//
//	return 0;
//}
