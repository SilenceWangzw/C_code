#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//1.下面的代码结果是
//int main()
//{
//    char arr[] = { 'b', 'i', 't' };
//    //strlen计算字符串长度的时候，遇到\0停止
//    printf("%zd\n", strlen(arr));//随机值
//    return 0;
//}


//2.下面代码的结果是
//int main()
//{
//    printf("%zd\n", strlen("c:\test\121"));//7
//    return 0;
//}


//3.下面代码的结果是
//int num = 10;
//int main()
//{
//    int num = 1;
//    printf("num = %d\n", num);//局部优先
//    return 0;
//}


//4.下面代码的结果是
//int main()
//{
//    int a = 7;
//    int b = 2;
//    float c = 2.0f;
//    printf("%d\n", a / b);
//    printf("%f\n", a / c);
//
//    return 0;
//}


//5.下面代码的结果是
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("a = %d b = %d c = %d\n:", a, b, c);
//	return 0;
//}


//6.下面程序输出的结果是
//int main()
//{
//    printf("%5d\n", 123456);
//    return 0;
//}


//7.给定两个整数a和b (0 < a,b < 10,000)，计算a除以b的整数商和余数。
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("%d %d\n", a / b, a % b);
//	return 0;
//}


//8.据说智商140以上者称为天才，KiKi想知道他自己是不是天才，请帮他编程判断。
//输入一个整数表示一个人的智商，如果大于等于140，则表明他是一个天才，输出“Genius”。
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		if (n >= 140)
//		{
//			printf("Genius\n");
//		}
//	}
//	return 0;
//}


//9.KiKi想知道从键盘输入的两个数的大小关系，请编程实现。
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	while (scanf("%d%d", &num1, &num2) != EOF)
//	{
//		if (num1 > num2)
//		{
//			printf("%d>%d\n", num1, num2);
//		}
//		else if (num1 < num2)
//		{
//			printf("%d<%d\n", num1, num2);
//		}
//		else
//		{
//			printf("%d=%d\n", num1, num2);
//		}
//	}
//	return 0;
//}


//10.判断一个整数是否能5整除是一个挺简单的问题，懒惰的KiKi还是不想自己做，于是找到你帮他写代码，你就帮帮他吧。
//int main() {
//    int num = 0;
//    scanf("%d", &num);
//    if (num % 5 == 0)
//    {
//        printf("YES\n");
//    }
//    else {
//        printf("NO\n");
//    }
//    return 0;
//}


//11.KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的线段图案。
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			printf("%c", '*');
//		}
//		printf("\n");
//	}
//	return 0;
//}


//12.下面代码的结果是
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)
//			printf("%d ", i);
//	}
//	return 0;
//}


//13.写一个代码打印1-100之间所有3的倍数的数字
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d\n", i);
//		}
//		i++;
//	}
//	return 0;
//}


//14.写代码将三个整数按从大到小输出。
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}