#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//һ���ṹ��
//�ṹ��һЩֵ�ļ��ϣ���Щֵ��Ϊ��Ա�������ṹ��ÿ����Ա�����ǲ�ͬ���͵ı���
//1.�ṹ�����͵�����
//struct book {
//	//��Ա����
//	char name[20];
//	int price;
//	char id[12];
//}b4, b5, b6;//b4,b5,b6��ȫ�ֱ���
//int main()
//{
//	//b1,b2,b3�Ǿֲ�����
//	struct book b1;
//	struct book b2;
//	struct book b3;
//	return 0;
//}


//�������� -- �������ṹ��ʱ�򣬿��Բ���ȫ������
//�����ṹ������ -- ֻ��ʹ��һ�Σ��޷�����������µı���
//struct {
//	char c;
//	int i;
//	char ch;
//	double d;
//}s;
//struct {
//	char c;
//	int i;
//	char ch;
//	double d;
//}*ps;
//int main()
//{
//	ps = &s;//err�����������������������������ȫ��ͬ���������ͣ������ǷǷ���
//	return 0;
//}


//2.�ṹ�������� -- �ڽṹ�а���һ������Ϊ�ýṹ����ĳ�Ա�Ƿ������
//struct A {
//	int i;
//	char c;
//};
//struct B {
//	char c;
//	struct A sa;
//	double d;
//};


//����������÷�ʽ
//struct N {
//	int d; //4bite
//	struct N n; //4+4+4...... ���ݹ�
//};
//int main()
//{
//	struct N sn;
//
//	return 0;
//}


//��ȷ�������÷�ʽ
//struct Node {
//	int data;
//	struct Node* next; //�����һ�����ĵ�ַ
//};


//3.�ṹ������Ķ���ͳ�ʼ��
//struct S {
//	char c;
//	int i;
//}s1, s2;
//struct B {
//	double d;
//	struct S s;
//	char c;
//};
//
//int main()
//{
//	struct S s3 = { 'w',20 };//w����c��20����i
//	struct B s4 = { 3.14,{'w',100},'x' };
//	printf("%lf %c %d %c", s4.d, s4.s.c, s4.s.i, s4.c);
//	return 0;
//}


//4.�ṹ���ڴ����
//�ṹ���ڴ��С����
struct S {
	int i;
	char c;
};
struct S2 {
	char c1;
	int i;
	char c2;
};
int main()
{
	struct S s = { 0 };
	struct S2 s2 = { 0 };
	printf("%d\n", sizeof(s));
	printf("%d\n", sizeof(s2));
	return 0;
}