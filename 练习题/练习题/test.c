#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//4��1��
//1.������������a��b (0 < a,b < 10,000)������a����b�������̺�������
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("%d %d\n", a / b, a % b);
//	return 0;
//}


//2.��˵����140�����߳�Ϊ��ţ�KiKi��֪�����Լ��ǲ�����ţ����������жϡ�
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


//3.KiKi��֪���Ӽ���������������Ĵ�С��ϵ������ʵ�֡�
//int main()
//{
//	int a = 0;
//	int b = 0;
//	while (scanf("%d%d", &a, &b) != EOF)
//	{
//		if (a > b)
//		{
//			printf("%d>%d\n", a, b);
//		}
//		else if (a < b)
//		{
//			printf("%d<%d\n", a, b);
//		}
//		else
//		{
//			printf("%d=%d\n", a, b);
//		}
//	}
//	return 0;
//}


//4.�ж�һ�������Ƿ���5������һ��ͦ�򵥵����⣬�����KiKi���ǲ����Լ����������ҵ������д���룬��Ͱ�����ɡ�
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	if (m % 5 == 0)
//	{
//		printf("YES\n");
//	}
//	else
//	{
//		printf("NO\n");
//	}
//	return 0;
//}


//5.KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á�*����ɵ��߶�ͼ����
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//6.дһ�������ӡ1-100֮������3�ı���������
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}


//7.д���뽫�������������Ӵ�С�����
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
//		int tmp = c;
//		c = b;
//		b = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}


//4��7��
//8.��10�����������ֵ
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];
//	for (int i = 0; i < 10; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d\n", max);
//	return 0;
//}


//9.����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100��ֵ����ӡ�����
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + (1.0 / i) * flag;
//		flag = flag * -1;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}


//10.��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9
//9 19 29 39 49 59 69 79 89 90 91 92 93 94 95 96 97 98 99
//int main()
//{
//	int sum = 0;
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)//��λ
//		{
//			sum++;
//		}
//		if (i / 10 == 9)//ʮλ
//		{
//			sum++;
//		}
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//11.��ӡ1000�굽2000��֮�������
//int main()
//{
//	for (int year = 1000; year <= 2000; year++)
//	{
//		if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
//		{
//			printf("%d\n", year);
//		}
//	}
//	return 0;
//}


//12.���������������������������Լ��
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int min = a > b ? b : a;
//	while (min > 0)
//	{
//		if (a % min == 0 && b % min == 0)
//		{
//			printf("%d\n", min);
//			break;
//		}
//		min--;
//	}
//	return 0;
//}


//շת�����
//int main()
//{
//	int a = 24;
//	int b = 18;
//	int c = a % b;
//	while (c != 0)
//	{
//		a = b;
//		b = c;
//		c = a % b;
//	}
//	printf("%d\n", b);
//	return 0;
//}

//4��8��
//13.KiKi��֪���Ѿ�������������a��b��c�ܷ񹹳�������
//����ܹ��������Σ��ж������ε����ͣ��ȱ������Ρ����������λ���ͨ�����Σ���
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	while (scanf("%d%d%d", &a, &b, &c) != EOF)
//	{
//		if (a + b > c && a + c > b && b + c > a)
//		{
//			if (a == b && b == c)
//			{
//				printf("Equilateral triangle!\n");
//			}
//			else if (a == b || a == c || b == c)
//			{
//				printf("Isosceles triangle!\n");
//			}
//			else
//			{
//				printf("Ordinary triangle!\n");
//			}
//		}
//		else {
//			printf("Not a triangle!\n");
//		}
//	}
//	return 0;
//}



//14.����Ļ�����9*9�˷��ھ���
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-3d ", j, i, j * i);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//15.дһ�����룺��ӡ100~200֮�������
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int flag = 1;
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


//4��14��
//16.KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á�*����ɵ�X��ͼ����
//int main() {
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < n; j++)
//            {
//                if (i == j || i + j == n - 1)
//                {
//                    printf("*");
//                }
//                else {
//                    printf(" ");
//                }
//            }
//            printf("\n");
//        }
//    }
//}


//17.KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á�*����ɵġ����ġ�������ͼ����
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				if (i == 0 || i == n - 1)
//				{
//					printf("* ");
//				}
//				else if (j == 0 || j == n - 1)
//				{
//					printf("* ");
//				}
//				else {
//					printf("  ");
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}


//18.KiKi��һ����������֪��ת�ú�ľ��󣨽���������л����õ����¾����Ϊת�þ��󣩣����̰������
//int main()
//{
//	int arr[2][3] = { 1,2,3, 4,5,6 };
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	printf("------------------------------\n");
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 2; j++)
//		{
//			printf("%d ", arr[j][i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//19.����10��������Ҫ������ʱ���������10������ӡ������������������ǰ��������෴��˳���ӡ��10������
//int main()
//{
//	int arr[10] = { 0 };
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//20.���������������е����У����������кϲ�Ϊһ���������в������
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d%d", &n, &m);
//	int arr1[1000] = { 0 };
//	int arr2[1000] = { 0 };
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	for (int i = 0; i < m; i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//
//	//��ʼ��ӡ
//	int i = 0;
//	int j = 0;
//	while (i < n && j < m)//���ȵ�����i��j����Ч���±�
//	{
//		if (arr1[i] < arr2[j])
//		{
//			printf("%d ", arr1[i]);
//			i++;
//		}
//		else
//		{
//			printf("%d ", arr2[j]);
//			j++;
//		}
//	}
//	//�жϻ����ĸ�����������
//	while (j < m)
//	{
//		printf("%d ", arr2[j]);
//		j++;
//	}
//	while (i < n)
//	{
//		printf("%d ", arr1[i]);
//		i++;
//	}
//	return 0;
//}


//21.��дһ�����򣬴��û������ж�ȡ10���������洢��һ�������С�Ȼ�󣬼��㲢�����Щ������ƽ��ֵ��
//int main()
//{
//	int arr[10] = { 0 };
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	double sum = 0.0;
//	for (int i = 0; i < 10; i++)
//	{
//		sum = sum + arr[i];
//	}
//	printf("%.2lf\n", sum / 10);
//	return 0;
//}


//22.������A�е����ݺ�����B�е����ݽ��н�����������һ����
//int main()
//{
//	int arr1[5] = { 1,3,5,7,9 };
//	int arr2[5] = { 2,4,6,8,10 };
//	for (int i = 0; i < 5; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}