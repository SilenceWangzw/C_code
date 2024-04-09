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


//15.下面代码执行的结果是什么
//int main() {
//	int x = 3;
//	int y = 3;
//	switch (x % 2) {
//	case 1:
//		switch (y)
//		{
//		case 0:
//			printf("first");
//		case 1:
//			printf("second");
//			break;
//		default: printf("hello");
//		}
//	case 2:
//		printf("third");
//	}
//	return 0;
//}


//16.下面程序的输出结果是什么
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}


//17.求十个整数中的最大值
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];
//	for (int i = 0; i < 10; i++)
//	{
//		if (arr[0] < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("最大值为：%d", max);
//	return 0;
//}


//18.计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;//1表示正号
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + (1.0 / i) * flag;
//		flag = flag * -1;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}


//19.编写程序数一下 1到 100 的所有整数中出现多少个数字9
//9 19 29 39 49 59 69 79 89 90 91 92 93 94 95 96 97 98 99 
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}


//20.打印1000年到2000年之间的闰年
//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//21.给定两个数，求这两个数的最大公约数
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//	int min = num1 > num2 ? num2 : num1;//保留更小的那个数
//	while (min)
//	{
//		if (num1 % min == 0 && num2 % min == 0)
//		{
//			printf("%d\n", min);
//			break;
//		}
//		min--;
//	}
//	return 0;
//}


//22.猜数字游戏
//#include<stdlib.h>
//void menu()
//{
//	printf("********************************\n");
//	printf("********     1.play      *******\n");
//	printf("********     0.exit      *******\n");
//	printf("********************************\n");
//}
//void game()
//{
//	//1.生成随机数
//	int ret = (rand() % 100) + 1;
//	//2.猜数字
//	int guess = 0;
//	while (1)
//	{
//		printf("请输入数字:> ");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("猜对了\n");
//			break;
//		}
//	}
//
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	do {
//		menu();//打印菜单
//
//		printf("请输入:> ");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break
//		default:
//			printf("输入错误，请重新输入\n");
//		}
//	} while (input);
//	return 0;
//}


//23.在屏幕上输出9*9乘法口诀表
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %-4d", j, i, j * i);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//24.写一个代码：打印100~200之间的素数
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int flag = 1;//假设是素数
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}