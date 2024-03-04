#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//一、结构体
//结构是一些值的集合，这些值称为成员变量。结构的每个成员可以是不同类型的变量
//1.结构体类型的声明
//struct book {
//	//成员变量
//	char name[20];
//	int price;
//	char id[12];
//}b4, b5, b6;//b4,b5,b6是全局变量
//int main()
//{
//	//b1,b2,b3是局部变量
//	struct book b1;
//	struct book b2;
//	struct book b3;
//	return 0;
//}


//特殊声明 -- 在声明结构的时候，可以不完全的声明
//匿名结构体类型 -- 只能使用一次，无法用这个创建新的变量
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
//	ps = &s;//err，编译器会把上面两个声明当成完全不同的两个类型，所以是非法的
//	return 0;
//}


//2.结构的自引用 -- 在结构中包含一个类型为该结构本身的成员是否可以呢
//struct A {
//	int i;
//	char c;
//};
//struct B {
//	char c;
//	struct A sa;
//	double d;
//};


//错误的自引用方式
//struct N {
//	int d; //4bite
//	struct N n; //4+4+4...... 死递归
//};
//int main()
//{
//	struct N sn;
//
//	return 0;
//}


//正确的自引用方式
//struct Node {
//	int data;
//	struct Node* next; //存放下一个结点的地址
//};


//3.结构体变量的定义和初始化
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
//	struct S s3 = { 'w',20 };//w给了c，20给了i
//	struct B s4 = { 3.14,{'w',100},'x' };
//	printf("%lf %c %d %c", s4.d, s4.s.c, s4.s.i, s4.c);
//	return 0;
//}


//4.结构体内存对齐
//结构体内存大小计算
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