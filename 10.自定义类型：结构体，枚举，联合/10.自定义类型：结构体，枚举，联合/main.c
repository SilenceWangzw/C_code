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
//struct S1 {
//	char c1;
//	int i;
//	char c2;
//};
//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};
//struct S3 
//{
//	double d;
//	char c;
//	int i;
//};
//struct S4 
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//int main()
//{
//	struct S1 s1 = { 0 };
//	struct S2 s2 = { 0 };
//	struct S3 s3 = { 0 };
//	struct S4 s4 = { 0 };
//	printf("%d\n", sizeof(s1));
//	printf("%d\n", sizeof(s2));
//	printf("%d\n", sizeof(s3));
//	printf("%d\n", sizeof(s4));
//	return 0;
//}
//�٣��ṹ��ĵ�һ����Ա�����ڽṹ��������ڴ��д洢λ�õ�0ƫ�ƴ���ʼ
//�ڣ��ӵڶ�����Ա��������г�Ա��������һ��������(��Ա��С��Ĭ�϶������Ľ�Сֵ)���������ĵ�ַ��
//�ۣ��ṹ����ܴ�С�����г�Ա�Ķ������������Ǹ���������������
//����ƽṹ���ʱ�򣬼�Ҫ������룬��Ҫ��ʡ�ռ�ֻ����ռ�ÿռ�С�ĳ�Ա����������һ��


//5.�޸�Ĭ�϶����� -- Ĭ�϶�������8
//#pragma pack(2)//��Ĭ�϶�������Ϊ2
//struct S
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack() //ȡ�����õ�Ĭ�϶���������ԭΪĬ��
//
//int main()
//{
//	printf("%d\n", sizeof(struct S));
//	return 0;
//}


//#pragma pack(1)
//struct S
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()
//int main()
//{
//	printf("%d\n", sizeof(struct S));
//	return 0;
//}
//���ۣ��ṹ�ڶ��뷽ʽ�����ʵ�ʱ�����ǿ����Լ�����Ĭ�϶�����


//�����⣺дһ���꣬����ṹ����ĳ����������׵�ַ��ƫ�ƣ�������˵��
//offsetof -- ����ṹ���Ա��ƫ����
//#include<stddef.h>
//struct S
//{
//	char c1;
//	int i;
//	char c2;
//};
//int main()
//{
//	printf("%d\n", offsetof(struct S, c1));
//	printf("%d\n", offsetof(struct S, i));
//	printf("%d\n", offsetof(struct S, c2));
//	return 0;
//}


//6.�ṹ�崫��
//struct S
//{
//	int data[1000];
//	int num;
//};
//void print1(struct S s) //�ṹ�崫��
//{
//	printf("%d\n", s.num);
//}
//void print2(struct S* ps) //�ṹ���ַ����
//{
//	printf("%d\n", ps->num);
//}
//int main()
//{
//	struct S s = { {1,2,3,4},1000 };
//	print1(s);//���ṹ��
//	print2(&s);//����ַ
//	return 0;
//}
//���ۣ��ṹ�崫�ε�ʱ��Ҫ���ṹ��ĵ�ַ����Լϵͳ����


