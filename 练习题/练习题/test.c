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