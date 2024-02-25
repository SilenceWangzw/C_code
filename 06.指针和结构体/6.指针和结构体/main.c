#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//一、指针
//1.指针是什么
//指针就是变量，用来存放地址的变量
//地址是唯一标识一块地址空间的
//指针的大小在32位平台是4个字节，在64位平台是8个字节
//int main()
//{
//	int a = 10; //a占4个字节
//	int* pa = &a; //拿到的是a的第4个字节中的第一个字节的地址
//	*pa = 20;
//	printf("%d\n", a);
//	return 0;
//}




//2.指针和指针类型
//指针类型的意义
//指针类型决定了指针解引用的权限有多大
//指针类型决定了指针走一步，能走多远(步长)
//int main()
//{
//	int a = 0x11223344;
//
//	int* pa = &a;
//	*pa = 0;//解引用一次可以访问4个字节
//
//	char* pc = &a;
//	*pc = 0;//访问权限发生改变，解引用一次只能访问1个字节
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	char* pc = arr;
//	printf("%p\n", p);
//	printf("%p\n", p + 1);//一次跳过4个字节
//
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);//一次跳过1个字节
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	char* p = arr;
//	for (int i = 0; i < 10; i++)
//	{
//		*(p + i) = 1; //p+i其实是下标为i的地址
//	}
//
//	return 0;
//}




//3.野指针
//野指针就是指针指向的位置是不可知的（随机的、不正确的、没有明确限制的）
//成因：指针未初始化
//int main()
//{
//	//这里的p就是一个野指针
//	int* p;//p是一个局部指针变量，局部变量不初始化，默认是随机值
//	*p = 20;//非法访问内存了
//
//	return 0;
//}


//指针越界访问
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 10; i++) //越界
//	{
//		*p = i;
//		p++;
//	}
//	return 0;
//}


//指针指向的空间释放
//int* test() {
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	*p = 20;
//	return 0;
//}


//如何规避野指针
//指针初始化
//int main()
//{
//	//当前不知道p应该初始化为什么地址时候，直接初始化为NULL
//	int* p = NULL;
//	//明确知道初始化的值
//	int a = 10;
//	int* pa = &a;
//	return 0;

//小心指针越界C语言本身是不会检查数组越界行为的
//指针指向空间释放及时置NULL
//使用指针之前检查有效性
//int main()
//{
//	int* p = NULL;
//	if (p != NULL) {
//		*p = 10;
//	}
//	return 0;
//}




//4.指针运算
//指针+-整数
//#define MAX 5
//int main()
//{
//	float arr[MAX];
//	float* vp;
//	for (vp = &arr[0]; vp < &arr[MAX];) {
//		*vp++ = 0; //等价于 *vp=0  vp++
//	}
//	for (int i = 0; i < 5; i++) {
//		printf("%f ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int* pend = arr + 9;
//	while (p <= pend) {
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}


//指针-指针:得到的是两个指针之间的元素个数
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//指针和指针相减的前提是两个指针指向同一块空间
//	printf("%d\n", &arr[9] - &arr[0]);
//	return 0;
//}


//模拟实现求字符串长度函数
//写法1
//int my_strlen(char* p)
//{
//	int count = 0;
//	while (*p != '\0')
//	{
//		p++;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int len = my_strlen("abc");
//	printf("%d\n", len);
//	return 0;
//}


//写法2:指针-指针
//int my_strlen(char* p)
//{
//	char* start = p;
//	while (*p != '\0')
//	{
//		p++;
//	}
//	return p - start;
//}
//int main()
//{
//	int len = my_strlen("abc");
//	printf("%d\n", len);
//	return 0;
//}
//指针的关系运算
//标准规定：允许指向数组元素的指针与指向数组元素最后一个元素后面的那个内存位置的指针比较
//但不允许与指向第一个元素之前的那个内存位置的指针进行比较




//5.指针和数组
//int main()
//{
//	int arr[10] = { 0 };
//	//数组名是首元素的地址
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	//[] -- 是一个操作符，2和arr是两个操作数
//	//arr[2] <===> *(p+2) <===> *(2+p) <===> *(2+arr) <===>  *(arr+2)  == 2[arr]
//	//2[arr] <===> *(2+arr)
//	return 0;
//}




//6.二级指针
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa是指针变量，一级指针
//	//ppa就是二级指针变量
//	int** ppa = &pa;//pa也是个变量，&pa取出pa在内存中的起始地址
//	return 0;
//}




//7.指针数组
//int main()
//{
//	int arr[10];//整型数组 - 存放整型的数组就是整型数组
//	char ch[5];//字符数组 - 存放的是字符
//	//指针数组 - 存放指针的数组
//	int* parr[5];//整型指针的数组
//	char* pch[5];
//
//	return 0;
//}




//二、结构体
//1.结构体类型的声明
//结构是一些值的集合，但是值的类型可以不同
//struct Stu {
//	//结构体的成员变量
//	char name[20];//名字
//	int age;//年龄
//	char id[20]//学号
//};



//2.结构体初始化
//struct Stu {
//	//结构体的成员变量
//	char name[20];//名字
//	int age;//年龄
//	char id[20]//学号
//};
//int main()
//{
//	struct Stu s = { "zhangsan",18,11223344 };
//	return 0;
//}



//3.结构体成员访问
//struct Stu {
//	//结构体的成员变量
//	char name[20];//名字
//	int age;//年龄
//	char id[20];//学号
//};
//int main()
//{
//	struct Stu s = { "zhangsan",18,"11223344" };
//	printf("%s %d %s\n", s.name, s.age, s.id);
//	return 0;
//}



//4.结构体传参
//struct Stu {
//	
//	char name[20];
//	int age;
//	char id[20];
//};
//
//void print1(struct Stu t) {
//	printf("%s %d %s\n", t.name, t.age, t.id);
//}
//void print2(struct Stu* p) {
//	printf("%s %d %s\n", p->name, p->age, p->id);
//}
//int main()
//{
//	struct Stu s = { "zhangsan",18,"11223344" };
//	//写一个函数打印s的内容
//	print1(s);//传值调用
//	print2(&s);//传址调用
//	//优先选择传址调用，不会浪费空间
//	return 0;
//}