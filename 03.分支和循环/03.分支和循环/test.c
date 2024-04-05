#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//C语言是一门结构化语言，结构指的是顺序结构、选择结构、循环结构
//一、if语句
//int main()
//{
//	int num = 10;
//	if (num)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}


//例：输入一个整数，判断是否为奇数
//int main()
//{
//	int num = 0;
//	//输入
//	scanf("%d", &num);
//	//判断和输出
//	if (num % 2 != 0)
//	{
//		printf("%d是奇数\n", num);
//	}
//	else
//	{
//		printf("%d是偶数\n", num);
//	}
//	return 0;
//}


//例：输入一个年龄，判断是否成年
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age >= 18)
//	{
//		printf("成年\n");
//	}
//	else
//	{
//		printf("未成年\n");
//	}
//	return 0;
//}


//嵌套if
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num == 0)
//	{
//		printf("输入的值是0\n");
//	}
//	else
//	{
//		if (num > 0)
//		{
//			printf("输入的值是正数\n");
//		}
//		else {
//			printf("输入的值是负数\n");
//		}
//		
//	}
//	return 0;
//}


//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("少年\n");
//	}
//	else if (age >= 18 && age <= 44)
//	{
//		printf("青年\n");
//	}
//	else if (age >= 45 && age <= 59)
//	{
//		printf("中老年\n");
//	}
//	else if (age >= 60 && age <= 89)
//	{
//		printf("老年\n");
//	}
//	else if (age >= 90)
//	{
//		printf("老寿星\n");
//	}
//	return 0;
//}