#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//1.����Ĵ�������
//int main()
//{
//    char arr[] = { 'b', 'i', 't' };
//    //strlen�����ַ������ȵ�ʱ������\0ֹͣ
//    printf("%zd\n", strlen(arr));//���ֵ
//    return 0;
//}


//2.�������Ľ����
//int main()
//{
//    printf("%zd\n", strlen("c:\test\121"));//7
//    return 0;
//}


//3.�������Ľ����
//int num = 10;
//int main()
//{
//    int num = 1;
//    printf("num = %d\n", num);//�ֲ�����
//    return 0;
//}


//4.�������Ľ����
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


//5.�������Ľ����
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


//6.�����������Ľ����
//int main()
//{
//    printf("%5d\n", 123456);
//    return 0;
//}


//7.������������a��b (0 < a,b < 10,000)������a����b�������̺�������
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("%d %d\n", a / b, a % b);
//	return 0;
//}


//8.��˵����140�����߳�Ϊ��ţ�KiKi��֪�����Լ��ǲ�����ţ����������жϡ�
//����һ��������ʾһ���˵����̣�������ڵ���140�����������һ����ţ������Genius����
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


//9.KiKi��֪���Ӽ���������������Ĵ�С��ϵ������ʵ�֡�
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


//10.�ж�һ�������Ƿ���5������һ��ͦ�򵥵����⣬�����KiKi���ǲ����Լ����������ҵ������д���룬��Ͱ�����ɡ�
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


//11.KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á�*����ɵ��߶�ͼ����
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


//12.�������Ľ����
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


//13.дһ�������ӡ1-100֮������3�ı���������
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


//14.д���뽫�����������Ӵ�С�����
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


//15.�������ִ�еĽ����ʲô
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


//16.����������������ʲô
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


//17.��ʮ�������е����ֵ
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
//	printf("���ֵΪ��%d", max);
//	return 0;
//}


//18.����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;//1��ʾ����
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + (1.0 / i) * flag;
//		flag = flag * -1;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}


//19.��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9
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


//20.��ӡ1000�굽2000��֮�������
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


//21.���������������������������Լ��
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//	int min = num1 > num2 ? num2 : num1;//������С���Ǹ���
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


//22.��������Ϸ
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
//	//1.���������
//	int ret = (rand() % 100) + 1;
//	//2.������
//	int guess = 0;
//	while (1)
//	{
//		printf("����������:> ");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("�¶���\n");
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
//		menu();//��ӡ�˵�
//
//		printf("������:> ");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break
//		default:
//			printf("�����������������\n");
//		}
//	} while (input);
//	return 0;
//}


//23.����Ļ�����9*9�˷��ھ���
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


//24.дһ�����룺��ӡ100~200֮�������
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int flag = 1;//����������
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