#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<errno.h>
#include<string.h>
#include<stdlib.h>

//һ��Ϊʲô���ڶ�̬�ڴ����
//int main()
//{
//	//�Ѿ����յ��ڴ濪�ٷ�ʽ
//	int a = 10;//4���ֽ�
//	int arr[10];//40���ֽ�
//	return 0;
//}
//�ص㣺
//�٣��ռ俪�ٵĴ�С�ǹ̶���
//�ڣ�������������ʱ�򣬱���ָ�����鳤�ȣ�������Ҫ���ڴ��ڱ���ʱ����




//������̬�ڴ溯���Ľ���
//1.malloc��free
// void* malloc(size_t size)
//int main()
//{
//	int arr[10] = { 0 };
//	//��̬�ڴ濪��
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//ʹ��
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	//û��free
//	//������˵�ڴ�ռ�Ͳ�������
//	//�������˳���ʱ��ϵͳ���Զ������ڴ�ռ�
//	//�ڴ�й¶���ռ俪���˲�ʹ�ã�Ҳ����
//
//	free(p);
//	p = NULL; //�ͷ�֮��p����ָ���Ǹ���ַ����ֹҰָ�룬������ΪNULL
//
//	return 0;
//}
//������ٳɹ����򷵻�һ��ָ�򿪱ٺÿռ��ָ��
//�������ʧ�ܣ��򷵻�һ��NULLָ�룬���malloc�ķ���ֵһ��Ҫ�����
//����ֵ��������void*������malloc��������֪�����ٿռ�����ͣ�������ʹ�õ�ʱ��ʹ�����Լ�������
//�������sizeΪ0��malloc����Ϊ�Ǳ�׼��δ���壬ȡ���ڱ�����
//�������ָ��Ŀռ䲻�Ƕ�̬���ٵģ���free��������Ϊ��δ�����
//���������NULLָ�룬��free������ʲô�¶�����


//2.calloc
//void* calloc(size_t num , size_t size);
//int main()
//{
//	//����10�����͵Ŀռ�
//	int* p = (int*)calloc(10, sizeof(int)); //���ٺ�֮��Ὣ���ݳ�ʼ��Ϊ0
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//��ӡ
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	//�ͷ�
//	free(p);
//	p = NULL;
//
//	return 0;
//}


//3.realloc
//realloc�����ĳ����ö�̬�ڴ����������
//��ʱ���ֹ�ȥ����Ŀռ�̫С�ˣ���ʱ���־�������Ŀռ�����ˣ�realloc�����Ϳ��������Զ�̬�����ڴ��С�ĵ���
//void* realloc(void* ptr, size_t size);
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//ʹ��
//	//��ʼ��Ϊ��1 2 3 4 5 6 7 8 9 10
//	for (int i = 0; i < 10; i++)
//	{
//		*(p + i) = i + 1;
//	}
//	//����
//	//���1���ڴ��㹻��ֱ��׷��
//	//���2���ڴ治�㣬calloc���ڶ���������һ���������ڴ�ռ䣬����ԭ���ݿ�����ȥ������һ���µ���ʼ��ַ
//	int* ptr = (int*)realloc(p, 80);//��p��׷����40���ֽ�
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	free(p);
//
//	return 0;
//}


//int main()
//{
//	realloc(NULL, 40); //�ȼ�malloc(40)��
//	return 0;
//}




//���������Ķ�̬�ڴ����
//1.��NULLָ��Ľ����ò���
//int main()
//{
//	int* p = (int*)malloc(40);
//	//��һp����ʧ�ܵõ���ָ�룬��Կ�ָ��Ľ����û��������
//	if (p == NULL)
//	{
//		return 1;
//	}
//	*p = 20;
//	free(p);
//	p = NULL;
//	return 0;
//}


//2.�Զ�̬���ٿռ��Խ�����
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i <= 10; i++) //Խ��
//	{
//		*(p + i) = i;
//	}
//
//	free(p);
//
//	return 0;
//}


//3.�ԷǶ�̬�����ڴ�ʹ��free�ͷ�
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	free(p); //����p��ָ�����ջ���Ŀռ䣬���Ƕ�̬���ٵĿռ�
//	p = NULL;
//	return 0;
//}


//4.ʹ��free�ͷ�һ�鶯̬�����ڴ��һ����
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 1;
//	}
//	//ʹ��
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*p = i;
//		p++;
//	}
//
//	//�ͷ�
//	free(p); //�������ʱ���p�Ѿ�������ʼλ���ˣ������ͷ�һ����
//	p = NULL;
//	return 0;
//}


//5.��ͬһ�鶯̬�ڴ����ͷ�
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 1;
//	}
//	//....
//	free(p);
//	p = NULL; //free֮��Ҫ��ָ���ÿգ���Ҫ��ͬһ���ռ��ͷ�����
//	//....
//	free(p);
//
//	return 0;
//}


//6.��̬�����ڴ������ͷţ��ڴ�й©��
//void test()
//{
//	int* p = (int*)malloc(100);
//
//	int flag = 0;
//	scanf("%d", &flag);
//	if (flag == 5) //������5����ǰ���أ���û��ִ��free������p��Ҳ�ͷŲ��ˣ�������ڴ�й©������
//	{
//		return;
//	}
//
//	free(p);
//	p = NULL;
//}
//int main()
//{
//	test();
//	return 0;
//}


//int* test()
//{
//	//���ٿռ�
//	int* p = (int*)malloc(100);
//	if (p == NULL)
//	{
//		return p;
//	}
//	//.....
//
//	return p;
//
//}
//int main()
//{
//	int* ret = test();
//	//�����ͷ�
//
//	return 0;
//}
//ע�������ͷŲ���ʹ�õĶ�̬���ٵĿռ������ڴ�й©���мǶ�̬���ٵĿռ�һ��Ҫ�ͷţ�������ȷ���ͷ�




//�ġ����������
//1.����Tese��������ʲô���Ľ��
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//void Test()
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world"); //str�ǿ�ָ�룬������ʱ�����
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}


//�ķ�1��
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//void Test()
//{
//	char* str = NULL;
//	GetMemory(&str);
//	//str��ŵľ��Ƕ�̬���ٵ�100�ֽڵĵ�ַ
//	strcpy(str, "hello world"); 
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}


//�ķ�2��
//char* GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//void Test()
//{
//	char* str = NULL;
//	str = GetMemory(str);
//	//str��ŵľ��Ƕ�̬���ٵ�100�ֽڵĵ�ַ
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}


//2.����Test��������ʲô���Ľ��
//char* GetMemory()
//{
//	char p[] = "hello world";
//	return p; //����֮�󣬿ռ����ʧ��
//}
//void Test()
//{
//	char* str = NULL; 
//	str = GetMemory(); //str���յľ���Ұָ��
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}


//int* test()
//{
//	//����ջ�ռ��ַ������
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	printf("%d\n", *p);
//	return 0;
//}


//3.����Test��������ʲô���Ľ��
//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test()
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}


//4.����Test��������ʲô���Ľ��
//void Test()
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	if (str != NULL)
//	{
//		strcpy(str, "world"); //str��Ұָ�룬����free��str�ÿ�
//		printf(str);
//	}
//}
//int main()
//{
//	Test();
//	return 0;
//}




//�塢��������
//C99�У��ṹ�е����һ��Ԫ��������δ֪��С�����飬��ͽ������������Ա
//�ص㣺
//�٣��ṹ�е����������Աǰ�����������һ��������Ա
//�ڣ�sizeof���ص����ֽṹ��С����������������ڴ�
//�ۣ��������������Ա�Ľṹ��mallo()���������ڴ�Ķ�̬���䣬���ҷ����ڴ��Ӧ�ô��ڽṹ�Ĵ�С������Ӧ���������Ԥ�ڴ�С
//struct S {
//	int n;
//	int arr[];//���������Ա
//};
//int main()
//{
//	int sz = sizeof(struct S);
//	printf("%d\n", sz);
//
//	//���������ʹ��
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 40);//����Ŀռ��Ǹ�arr����ʹ�õ�
//	if (ps == NULL)
//	{
//		return 1;
//	}
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	struct S* ptr = (struct S*)realloc(ps, sizeof(struct S) + 80);
//	if (ptr != NULL)
//	{
//		ps = ptr;
//		ptr = NULL;
//	}
//
//	free(ps);
//	ps = NULL;
//
//	return 0;
//}


//struct S {
//	int n;
//	int* arr;
//};
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S));
//	if (ps == NULL)
//	{
//		return 1;
//	}
//	ps->n = 100;
//	ps->arr = (int*)malloc(40);
//	if (ps->arr == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//
//	//ʹ��
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	//����
//	int* ptr = (int*)realloc(ps->arr, 80);
//	if (ptr == NULL)
//	{
//		return 1;
//	}
//	//....
//
//	//�ͷ�
//	free(ps->arr);
//	free(ps);
//	ps = NULL;
//
//	return 0;
//}
//�������������
//�٣������ڴ��ͷ�
//�ڣ����������ڷ����ٶ�