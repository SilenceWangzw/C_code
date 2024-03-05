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
//①：结构体的第一个成员，放在结构体变量在内存中存储位置的0偏移处开始
//②：从第二个成员往后的所有成员，都放在一个对齐数(成员大小和默认对齐数的较小值)的整数倍的地址处
//③：结构体的总大小是所有成员的对齐数中最大的那个对齐数的整数倍
//在设计结构体的时候，既要满足对齐，又要节省空间只能让占用空间小的成员尽量集中在一起


//5.修改默认对齐数 -- 默认对齐数是8
//#pragma pack(2)//把默认对齐数改为2
//struct S
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack() //取消设置的默认对齐数，还原为默认
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
//结论：结构在对齐方式不合适的时候，我们可以自己更改默认对齐数


//笔试题：写一个宏，计算结构体中某变量相对于首地址的偏移，并给出说明
//offsetof -- 计算结构体成员的偏移量
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


//6.结构体传参
//struct S
//{
//	int data[1000];
//	int num;
//};
//void print1(struct S s) //结构体传参
//{
//	printf("%d\n", s.num);
//}
//void print2(struct S* ps) //结构体地址传参
//{
//	printf("%d\n", ps->num);
//}
//int main()
//{
//	struct S s = { {1,2,3,4},1000 };
//	print1(s);//传结构体
//	print2(&s);//传地址
//	return 0;
//}
//结论：结构体传参的时候，要传结构体的地址，节约系统开销


