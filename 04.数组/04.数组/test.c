#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//一、数组的概念
//为了能够存放多个相同类型的数值，就有了数组
//数组是一组相同类型元素的集合




//一维数组的创建和初始化
//1.创建
//int main()
//{
//	int math[20];//数组有20个元素，每个元素的类型是int
//	char ch[5];
//	double arr[6];
//	return 0;
//}


//2.初始化
//在创建数组的同时，给他赋值
//int main()
//{
//	int math1[10] = { 1,2,3,4,5,6,7,8,9,10 };//完全初始化
//	int math2[10] = { 1,2,3,4,5 };//不完全初始化，剩下的元素默认初始化为0
//
//	char ch1[5] = { 'a','b' };
//	char ch2[5] = "abc";
//	return 0;
//}


//3.数组的类型
//int main()
//{
//	int a = 10;
//	char ch = 'w';
//	double d = 0.0;
//
//	int arr[10] = { 0 };
//	//数组的元素类型是int
//	//数组的类型 -- int[10]
//
//	int arr2[5] = { 0 };
//	//数组的类型 -- int[5]
//
//	return 0;
//}




//三、一维数组的使用
//数组下标是从0开始的
//int main()
//{
//	//这里的10是指定数组元素个数的
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//这里的5是数组元素的下标
//	printf("%d\n", arr[5]);//[] -- 下标引用操作符
//	printf("%d\n", arr[9]);
//
//	return 0;
//}


//打印数组中所有元素
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//给数组中输入值，然后再打印
//int main()
//{
//	int arr[10] = { 0 };
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}




//四、一维数组在内存中的存储
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (int i = 0; i < 10; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);//& -- 取地址操作符，取出变量在内存中的地址
//	}
//	return 0;
//}
//数组在内存中是连续存放的
//随着数组下标的增长，地址也是由小（低）到大（高）变化




//五、sizeof计算数组元素个数
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%zd\n", sizeof(arr));// 40 -- 这里计算的是数组的大小，单位是字节
//
//	int sz = sizeof(arr) / sizeof(arr[0]);//总大小除以一个元素的大小
//	printf("数组元素个数为：%d\n", sz);
//
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}