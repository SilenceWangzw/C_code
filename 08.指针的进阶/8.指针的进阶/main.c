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


//3.һ��ָ�봫��
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	//һ��ָ��p����������
//	print(p, sz);
//
//	return 0;
//}


//4.����ָ�봫��
//void test(int** p2)
//{
//	**p2 = 20;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a; //pa��һ��ָ��
//	int** ppa = &pa; //ppa�Ƕ���ָ��
//
//	//�Ѷ���ָ����д���
//	test(ppa);
//	printf("%d\n", a);
//	return 0;
//}




//�塢����ָ�� -- ָ������ָ�� -- ��ź�����ַ��ָ��
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//
//	char ch = 'w';
//	char* pc = &ch;
//
//	int arr[10] = { 0 };
//	int(*parr)[10] = &arr; //parr��ָ�������ָ�룬��ŵ�������ĵ�ַ
//
//	//����ָ�� -- ��ź�����ַ��ָ��
//	//&������ -- ȡ���ľ��Ǻ����ĵ�ַ
//	//pf����һ������ָ�����
//	int (*pf)(int, int) = &Add;
//
//	return 0;
//}


//void test(char* str)
//{}
//int main()
//{
//	void(*pt)(char*) = &test;
//
//
//	return 0;
//}


//ͨ������ָ�����
//д��1��
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int(*pf)(int, int) = &Add;
//	int ret = (*pf)(3, 5); //ͨ��*pf�ҵ�Add����
//	printf("%d\n", ret);
//
//	return 0;
//}


//д��2��
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int(*pf)(int, int) = Add; //Add <===> pf
//	int ret = pf(3, 5);
//	printf("%d\n", ret);
//
//	return 0;
//}


//�Ķ�������Ȥ�Ĵ���
//1.
//int main()
//{
//	(*(void(*)())0)();
//	//����0��ַ���ĺ���
//	//�ú����޲Σ�����������void
//	//�٣�void(*)() -- ����ָ������
//	//�ڣ�(void(*)())0 -- ��0����ǿ������ת����������Ϊһ�������ĵ�ַ
//	//�ۣ�*(void(*)())0 -- ��0��ַ�����˽����ò���
//	//�ܣ�(*(void(*)())0)() -- ����0��ַ���ĺ���
//
//	return 0;
//}


//2.
//int main()
//{
//	void(*signal(int, void(*)(int)))(int);
//	//�٣�signal��()�Ƚ�ϣ�˵��signal�Ǻ�����
//	//�ڣ�signal�����ĵ�һ��������������int���ڶ��������������Ǻ���ָ�룬�ú���ָ��ָ��һ������Ϊint������������void�ĺ���
//	//�ۣ�signal�����ķ�������Ҳ��Ҳ��һ������ָ�룬�ú���ָ��ָ��һ������Ϊint������������void�ĺ���
//	//signal��һ������������
//
//	//��:
//	void(*)(int)signal(int, void(*)(int)); //�﷨����
//
//	typedef void(*pfun_t)(int); //��void(*)(int)�ĺ���ָ������������Ϊpfun_t
//	pfun_t signal(int, pfun_t);
//
//	return 0;
//}




//��������ָ������ -- ��ź���ָ�������
//����ָ�� int*
//����ָ������ int *arr[5];
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int main()
//{
//
//	int(*pf1)(int, int) = &Add;
//	int(*pf2)(int, int) = &Sub;
//
//	int (*pfArr[2])(int, int) = { pf1,pf2 };//pfArr���Ǻ���ָ������
//
//	return 0;
//}


//Ӧ��
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("***********************************\n");
//	printf("*******1. add      2. sub   *******\n");
//	printf("*******3. mul      4. div   *******\n");
//	printf("*******       0.exit        *******\n");
//	printf("***********************************\n");
//}
//int main()
//{
//	//������ - �������ͱ����ļӡ������ˡ���
//	int input = 0;
//	do {
//		menu();
//		int ret = 0;
//		printf("��ѡ��:> ");
//		int x = 0;
//		int y = 0;
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			printf("����������������:> ");
//			scanf("%d%d", &x, &y);
//			ret = Add(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 2:
//			printf("����������������:> ");
//			scanf("%d%d", &x, &y);
//			ret = Sub(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 3:
//			printf("����������������:> ");
//			scanf("%d%d", &x, &y);
//			ret = Mul(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 4:
//			printf("����������������:> ");
//			scanf("%d%d", &x, &y);
//			ret = Div(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 0:
//			printf("�˳�����\n");
//			break;
//		default:
//			printf("ѡ���������������\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}


//�޸İ�
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("***********************************\n");
//	printf("*******1. add      2. sub   *******\n");
//	printf("*******3. mul      4. div   *******\n");
//	printf("*******       0.exit        *******\n");
//	printf("***********************************\n");
//}
//int main()
//{
//	//������ - �������ͱ����ļӡ������ˡ���
//	int input = 0;
//	do {
//		menu();
//		//pfArr���Ǻ���ָ������
//		int(*pfArr[5])(int, int) = { NULL,Add,Sub,Mul,Div };
//		int ret = 0;
//		int x = 0;
//		int y = 0;
//		printf("��ѡ��:> ");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4) {
//			printf("����������������:> ");
//			scanf("%d%d", &x, &y);
//
//			ret = (pfArr[input])(x, y); //���ε����������
//			printf("%d\n", ret);
//		}
//		else if(input == 0)
//		{
//			printf("�˳�����\n");
//			break;
//		}
//		else {
//			printf("ѡ�����\n");
//		}
//	} while (input);
//
//	return 0;
//}




//�ߡ�ָ����ָ�������ָ��(�˽�)
//int main()
//{
//	int(*p)(int, int);//����ָ��
//	int(*p2[4])(int, int);//����ָ�������
//	int(*(*p3)[4])(int, int) = &p2;//ȡ�����Ǻ���ָ������ĵ�ַ,p3����һ��ָ����ָ�������ָ��
//	
//	return 0;
//}


//int main()
//{
//	int arr[10];
//	//����Ԫ������ -- int
//	//arr����������� int[10]
//
//	return 0;
//}




//�ˡ��ص�����
//ͨ������ָ����õĺ���
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
void menu()
{
	printf("***********************************\n");
	printf("*******1. add      2. sub   *******\n");
	printf("*******3. mul      4. div   *******\n");
	printf("*******       0.exit        *******\n");
	printf("***********************************\n");
}
int Calc(int (*pf)(int, int))
{
	int x = 0;
	int y = 0;
	printf("����������������:> ");
	scanf("%d%d", &x, &y);
	return pf(x, y); //ͨ������ָ����ã���Ϊ�ص�����
}
int main()
{
	//������ - �������ͱ����ļӡ������ˡ���
	int input = 0;
	do {
		menu();
		int ret = 0;
		printf("��ѡ��:> ");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			ret = Calc(Add);
			printf("ret = %d\n", ret);
			break;
		case 2:
			ret = Calc(Sub);
			printf("ret = %d\n", ret);
			break;
		case 3:
			ret = Calc(Mul);
			printf("ret = %d\n", ret);
			break;
		case 4:
			ret = Calc(Div);
			printf("ret = %d\n", ret);
			break;
		case 0:
			printf("�˳�����\n");
			break;
		default:
			printf("ѡ���������������\n");
			break;
		}
	} while (input);

	return 0;
}



//�š�ָ�������������Ľ���