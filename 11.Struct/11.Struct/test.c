#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//一、结构体类型的声明
//结构是一些值的集合，这些值称为成员变量，结构的每个成员可以是不同类型的变量
//例如描述一本书：书名、作者、定价、书号
//struct Book
//{
//	char book_name[20];
//	char author[20];
//	float price;
//	char id[19];
//};


//匿名结构体类型（不完全声明）：可以省略名字
//只能在声明时创建结构体变量
//struct
//{
//	char c;
//	int i;
//	double d;
//}s1, s2;




//二、结构体变量的创建和初始化
//1.创建
//创建方法1：
//struct Book
//{
//	char book_name[20];
//	char author[20];
//	float price;
//	char id[19];
//};
//int main()
//{
//	struct Book b1;//创建一个结构体变量b1;
//	return 0;
//}


//创建方法2
//struct Book
//{
//	char book_name[20];
//	char author[20];
//	float price;
//	char id[19];
//}b2;//创建一个结构体变量b2
//int main()
//{
//	return 0;
//}


//2.初始化
//struct Book
//{
//	char book_name[20];
//	char author[20];
//	float price;
//	char id[19];
//};
//int main()
//{
//	//方法1：按照结构体成员的顺序初始化
//	struct Book b1 = { "C程序设计","wzw",38.8f,"2024" };
//
//	//方法2：按照指定对的顺序初始化
//	struct Book b2 = { .book_name = "C程序设计",.author = "wzw",.price = 38.8f,.id = "2024" };
//
//	printf("%s %s %.2f %s\n", b1.book_name, b1.author, b1.price, b1.id);
//	printf("%s %s %.2f %s\n", b2.book_name, b2.author, b2.price, b2.id);
//
//	return 0;
//}


//3.结构体的自引用
//struct Node
//{
//	int data;//存放数据 -- 数据域
//	struct Node* next;//存放下一个结点的地址 -- 指针域
//};




//三、结构体内存对齐
//结构体的成员在内存中是存在对齐现象的
//struct S1
//{
//	char c1;
//	char c2;
//	int n;
//};
//struct S2
//{
//	char c1;
//	int n;
//	char c2;
//};
//int main()
//{
//	printf("%zd\n", sizeof(struct S1));
//	printf("%zd\n", sizeof(struct S2));
//	return 0;
//}
//结构体内存对齐规则
//①结构体的一个成员对齐到和结构体变量起始位置偏移量为0的地址
//②其他成员变量要对齐到对齐数的整数倍的地址处
//  对齐数：编译器默认的一个对齐数（VS中默认为8，Linux中gcc没有默认对齐数），与该成员变量大小的较小值
//③结构体总大小为最大对齐数（每个成员变量中，所有对齐数中最大的）的整数倍
//④如果嵌套了结构体，嵌套的结构体成员对齐到自己的成员中最大对齐数的整数倍
//为了防止浪费空间，设计时尽量让占用空间小的成员集中在一起




//四、结构体传参
//struct S
//{
//	int arr[1000];
//	int n;
//	char ch;
//};
//void print1(struct S tmp)
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", tmp.arr[i]);
//	}
//	printf("\n");
//	printf("%d\n", tmp.n);
//	printf("%c\n", tmp.ch);
//}
//void print2(struct S* ps)
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	printf("\n");
//	printf("%d\n", ps->n);
//	printf("%c\n", ps->ch);
//}
//int main()
//{
//	struct S s = { {1,2,3,4,5,6,7,8,9,10},10,'w' };
//
//	print1(s);//传值调用
//	print2(&s);//传址调用
//	return 0;
//}
//函数传参的时候，参数是需要压栈，会有时间和空间上的系统开销
//如果传递一个结构体对象时，结构体过大，参数压栈的系统开销较大，所以会导致性能下降
//尽量使用传址调用，避免空间和时间的浪费
