#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//�عˣ�
//1.ָ����Ǹ�������������ŵ�ַ����ַΨһ��ʶһ���ڴ�ռ�
//2.ָ��Ĵ�С�ǹ̶���4/8�ֽ�(32λƽ̨/64λƽ̨)
//3.ָ���������ͣ�ָ������;�����ָ���+-�����Ĳ�����ָ������ò�����ʱ���Ȩ��
//4.ָ�������

//һ���ַ�ָ��
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'b';
//	printf("%c\n", ch);
//	return 0;
//}


//int main()
//{
//	//�������ǰ�"hello bit"����ַ��������ַ��ĵ�ַ�洢����ps��
//	char* ps = "hello bit";
//
//	printf("%c\n", *ps);//h
//
//	return 0;
//}


//int main()
//{
//	//�����ǰ�"hello bit"����ַ����ŵ���arr������
//	char arr[] = "hello bit";
//	printf("%s\n", arr); //arr�������������ʼλ�õĵ�ַ
//	return 0;
//}


//һ��������
//�����ַ��������޸ģ����Լ���const����ֹ�����
//int main()
//{
//	const char* p1 = "hello bit"; //�����ڴ����ֻ��������������Ҫ���ڶ��
//	const char* p2 = "hello bit";
//
//	char arr1[] = "hello bit";//�������������飬�ڴ��еĿռ䲻ͬ
//	char arr2[] = "hello bit";
//
//	if (p1 == p2)
//	{
//		printf("p1 == p2\n");
//	}
//	else
//	{
//		printf("p1 != p2\n");
//	}
//
//	if (arr1 == arr2)
//	{
//		printf("arr1 == arr2\n");
//	}
//	else
//	{
//		printf("arr1 != arr2\n");
//	}
//
//	return 0;
//}




//����ָ������
//ָ��������һ�����ָ�������
//int main()
//{
//	int arr[10];//��������
//	char ch[5];//�ַ�����
//
//	int* arr2[6];//�������ָ������飬�����е�ÿ��Ԫ�ض���int*����
//	char* arr3[5];//����ַ�ָ������飬�����е�ÿ��Ԫ�ض���char*����
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* arr[3] = { &a,&b,&c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *(arr[i])); //���Ƽ������÷�
//	}
//	return 0;
//}


//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//
//	int* parr[3] = { arr1,arr2,arr3 };
//
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			//*(parr+i) <===> parr[i]
//			
//			//printf("%d ", *(*(parr + i) + j)); //д��1
//			//printf("%d ", *(parr[i] + j)); //д��2
//			printf("%d ", parr[i][j]); //д��3
//		}
//		printf("\n");
//	}
//	return 0;
//}




//��������ָ��
//����ָ�� - ָ�����͵�ָ��
//�ַ�ָ�� - ָ���ַ���ָ��
//����ָ�� - ָ�������ָ��
// int(*p)[10];  p����ָ��һ�����飬��������10��Ԫ�أ�ÿ��Ԫ����int��


//�ٴ�����������
//������ͨ����ʾ�Ķ���������Ԫ�صĵ�ַ
//��������������
//�٣�sizeof(������)���������������ʾ�������飬���������������Ĵ�С(��λ���ֽ�)
//�ڣ�&���������������������ʾ����Ȼ���������飬����&������ȡ��������������ĵ�ַ
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", arr + 1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0] + 1);
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);
//
//	int sz = sizeof(arr);
//	printf("%d\n", sz);
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//  
//	//p����һ������ָ�룬��ŵ�������ĵ�ַ��ָ��int[10]���͵�����
//	int(*p)[10] = &arr; //����p��[]�Ƚ�ϣ����Լ���()
//
//	return 0;
//}


//int main()
//{
//	char* arr[5] = { 0 };
//	char* (*pc)[5] = &arr;
//
//	return 0;
//}


//int main()
//{
//	double* d[5];
//	double* (*pd)[5] = &d; //pd��һ������ָ��
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;
//	
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//���Ƽ�ʹ������д��
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(*p + i));//p��ָ������ģ�*p��ʵ���൱����������������������Ԫ�صĵ�ַ������*p��������������Ԫ�صĵ�ַ
//	}
//
//	return 0;
//}


//void print1(int arr[3][5], int r, int c)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print2(int(*p)[5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", *(*(p + i) + j)); //�ҵ���i�У��±�Ϊj��Ԫ��
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//	print1(arr, 3, 5);
//	print2(arr, 3, 5); //arr����������ʾ������Ԫ�صĵ�ַ,��ά������Ԫ���ǵ�һ�У���һ���Ǹ�int arr[5]������
//
//	return 0;
//}




//�ġ����������ָ�����
//1.һά���鴫��
//void test(int arr[]) //ok? -- ��ȷ
//{}
//void test(int arr[10]) //ok? -- ��ȷ
//{}
//void test(int *arr) //ok? -- ��ȷ
//{}
//void test2(int *arr[20]) //ok? -- ��ȷ
//{}
//void test2(int **arr) //ok? -- ��ȷ -- arr2����Ԫ����int*���ͣ��ö���ָ�����
//{}
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 }; //���int*������
//	test(arr);
//	test2(arr2);
//
//	return 0;
//}


//2.��ά���鴫��
//void test(int arr[3][5]) // ok? -- ��ȷ
//{}
//void test(int arr[][]) //ok? -- ���󣬲���ʡ����
//{}
//void test(int arr[][5]) //ok? -- ��ȷ
//{}
//void test(int* arr) //ok? -- ���󣬵�һ���Ǹ�����ĵ�ַ
//{}
//void test(int *arr[5]) //ok? -- ��������ĵ�ַ������ָ������������
//{}
//void test(int(*arr)[5]) //ok? -- ��ȷ
//{}
//void test(int **arr) //ok? -- ���󣬴���ȥ��������ĵ�ַ��ƥ�䲻��
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);//��ά�����������ǵ�һ�еĵ�ַ
//	return 0;
//}




//�塢����ָ��


//��������ָ������


//�ߡ�ָ����ָ�������ָ��


//�ˡ��ص�����


//�š�ָ�������������Ľ���