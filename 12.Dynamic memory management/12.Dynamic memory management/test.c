#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//C���������˶�̬�ڴ濪�٣��ó���Ա�Լ�����������ͷſռ�
//һ��malloc��free
//����������ڴ�����һ���������ԵĿռ䣬������ָ�����ռ��ָ��
//������ٳɹ����򷵻�һ��ָ�򿪱ٺõĿռ��ָ��
//�������ʧ�ܣ��򷵻�һ��NULLָ��
//����ֵ��������void*
//int main()
//{
//	//����10�����Ϳռ�
//	int* p = (int*)malloc(sizeof(int) * 10);
//	if (p == NULL)
//	{
//		//�ռ俪��ʧ��
//		perror("malloc");
//		return 1;
//	}
//	//����ʹ����40���ֽڵĿռ�
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i + 1;
//	}
//
//	//�ͷ�
//	free(p);//pָ��Ŀռ䲻���ڵ�ǰ���򣬵��ǻ����ҵ����ռ�
//	p = NULL;
//
//	return 0;
//}
//malloc����Ŀռ������Ŀռ���ʲô�����أ�
//��̬�ڴ�Ĵ�С�ǿ��Ե�����
//���ٵ�λ�ò�ͬ
//malloc���ٵ�λ���ڶ�������������Ŀռ���ջ��
//malloc��free��óɶ�ʹ��




//����calloc��realloc
//int main()
//{
//	//����10�����͵Ŀռ�
//	//calloc��Ĭ�Ͻ�����Ŀռ�����Ϊ0
//	int* p = (int*)calloc(10, sizeof(int));//����10����СΪint���͵Ŀռ�
//	if (p == NULL)
//	{
//		//����ʧ��
//		perror("calloc");
//		return 1;
//	}
//
//	//ʹ�ÿռ�
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	//�ͷ�
//	free(p);
//	p = NULL;
//
//	return 0;
//}


//realloc -- ����
//����ֵΪ����֮���ڴ���ʼλ��
//realloc�����ڵ����ռ�ʱ���������
//���������֮���ڴ�ռ��㹻 --> ֱ��׷�ӿռ�
//���������֮���ڴ�ռ䲻�� --> ���ڴ�Ķ���������һ���µ������С�Ŀռ䣬���ɵ����ݿ������µĿռ䣬�ͷžɿռ䣬�����¿ռ�ĵ�ַ
//int main()
//{
//	//����ռ�
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		perror("calloc");
//		return 1;
//	}
//
//	//ʹ�ÿռ�
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	//�����ռ䣬ϣ�����20�����Ϳռ�
//	int* ptr = (int*)realloc(p, 20 * sizeof(int));
//	if (ptr != NULL);
//	{
//		p = ptr;
//	}
//
//	//�ͷ�
//	free(p);
//	p = NULL;
//	return 0;
//}




//���������Ķ�̬�ڴ����
//1.��NULLָ��Ľ����ò���
//int main()
//{
//	int* p = (int*)malloc(sizeof(int) * 10);
//	if (p == NULL)
//	{
//		return 1;
//	}
//	//ʹ�� -- ��������p����pΪ�գ������ִ���
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	return 0;
//}


//2.�Զ�̬�����ڴ�ռ��Խ�����
//int main()
//{
//	int* p = (int*)malloc(sizeof(int) * 10);
//	if (p == NULL)
//	{
//		return 1;
//	}
//	
//	int i = 0;
//	for (i = 0; i < 40; i++)//err Խ�����
//	{
//		*(p + i) = i;
//	}
//	return 0;
//}


//3.�ԷǶ�̬�����ڴ���ͷ�
//int main()
//{
//	int a = 10;
//	int* p = &a;
//
//	free(p);//err pָ��Ĳ��Ƕ�̬���ٵĿռ�
//	return 0;
//}


//4.ʹ��free�ͷ�һ�鶯̬�����ڴ��һ����
//int main()
//{
//	int* p = (int*)malloc(sizeof(int) * 10);
//	if (p == NULL)
//	{
//		return 1;
//	}
//	
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*p = i;
//		p++;
//	}
//
//	free(p);//err pָ��Ĳ��ǳ�ʼλ��
//
//	return 0;
//}


//5.��ͬһ���ڴ����ͷ�
//int main()
//{
//	int* p = (int*)malloc(sizeof(int) * 10);
//	if (p == NULL)
//	{
//		return 1;
//	}
//
//	//ʹ��
//
//	free(p);
//
//	//...
//
//	free(p); //err pΪҰָ�룬��Ұָ���ͷ�
//	p = NULL;
//
//	return 0;
//}


//6.��̬�����ڴ������ͷţ��ڴ�й©��
//�����˿ռ䣬��û���ͷţ��������֮ǰ���޷�ʹ������ڴ棬�˷�������ڴ�
//void test()
//{
//	int flag = 1;
//	int* p = (int*)malloc(100);
//	if (p == NULL)
//	{
//		return;
//	}
//
//	//ʹ��..
//	if (flag)
//		return;
//
//
//	free(p);//err û���ͷ��ڴ�
//	p = NULL;
//}
//int main()
//{
//	test();
//	return 0;
//}

