#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//一、指针变量和地址
//1.取地址操作符
//int main()
//{
//	int a = 20;//变量创建的本质其实是在内存中申请空间
//	向内存申请4个字节的空间，用来存放20这个数值
//	这4个字节，每个字节都有编号(地址)
//	变量的名字仅仅是给程序员看的，编译器不看名字，是通过地址找内存单元的
//	
//	int* pa = &a;//& -- 取地址操作符，拿到变量a的地址，拿到的是第一个字节的地址
//	pa是一个变量，这个变量pa是用来存放地址(指针)的
//	pa叫指针变量
//	int* 是pa的类型
//	*表示pa是指针变量
//	int表示pa指向的变量a的类型是int
//	return 0;
//}


//2.解引用操作符
//int main()
//{
//	int a = 20;
//	int* pa = &a;
//
//	*pa = 10;//* -- 解引用操作符(间接访问操作符)
//	printf("%d\n", a);
//	return 0;
//}


//3.指针变量的大小
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	//指针变量是用来存放地址的，一个地址的存放需要多大空间呢？那么指针变量的大小就是多大
//	printf("%zd\n", sizeof(p));
//	//32位机器 -- 4个字节
//	//64位机器 -- 8个字节
//
//	return 0;
//}


//指针变量的大小和类型无关，只要指针类型的变量，在相同的平台下，大小都是相同的
//int main()
//{
//	printf("%zd\n", sizeof(char*));
//	printf("%zd\n", sizeof(short*));
//	printf("%zd\n", sizeof(float*));
//	printf("%zd\n", sizeof(double*));
//	printf("%zd\n", sizeof(int*));
//	return 0;
//}




//二、指针变量类型的意义
//1.指针的解引用
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	*pa = 0;
//
//	return 0;
//}


//int main()
//{
//	int a = 20;
//	char* pa = &a;
//	*pa = 0;
//
//	return 0;
//}
//结论：指针的类型决定了，对指针解引用的时候有多大的权限（一次能操作几个字节）


//2.指针+-整数
//int main()
//{
//	int a = 20;
//	int* pa = &a;
//	char* pc = &a;
//	printf("&a = %p\n", &a);
//	printf("pa = %p\n", pa);
//	printf("pc = %p\n", pc);
//
//	printf("&a+1 = %p\n", &a + 1);
//	printf("pa+1 = %p\n", pa + 1);
//	printf("pc+1 = %p\n", pc + 1);
//
//	return 0;
//}
//总结：指针的类型决定了指针向前或者向后走一步有多大（距离）
//int* pa;   pa+1 ---> pa+1*sizeof(int)
//			 pa+n ---> pa+n*sizeof(int)
//char* pc;  pc+1 ---> pc+1*sizeof(char)
//           pc+n ---> pc+n*sizeof(char)


//3.void* 指针
//无具体类型的指针，这种类型的指针可以用来接受任意类型地址
//void*类型的指针变量不能直接进行解引用和+-操作
//int main()
//{
//	int a = 10;
//	char ch = 'w';
//
//	void* pv1 = &a;//int*
//	void* pv2 = &ch;//char*
//
//	return 0;
//}
//一般void*类型的指针是使用在函数参数的部分，用来接收不同类型数据的地址
//这样的设计可以实现泛型编程的效果，使得一个函数来处理多种类型的数据




//三、const修饰指针
//1.const修饰变量
//const修饰变量的时候，叫常变量，这个被修饰的变量本质上还是变量，只是不能被修改
//int main()
//{
//	const int num = 100;
//	num = 200;//err
//	printf("%d\n", num);
//	return 0;
//}


//int main()
//{
//	const int n = 10;
//	//C99之前不支持变长数组，数组的大小是需要常量或者常量表达式来指定的，不能是变量
//	int arr[n] = { 0 };//err，说明n本质上还是变量
//	return 0;
//}


//int main()
//{
//	const int n = 10;
//	int* p = &n;
//	*p = 20;//还是被修改了
//	printf("%d\n", n);
//	return 0;
//}


//2.const修饰指针变量
//一般来讲const修饰指针变量，可以放在*的左边，也可以放在*的右边，意义是不一样的
//int main()
//{
//	int n = 10;
//	int m = 100;
//
//	int* p = &n;
//	*p = 20;//ok
//
//	p = &m;//ok
//
//	return 0;
//}


//int main()
//{
//	int n = 10;
//	int m = 100;
//
//	int const* p = &n;//const修饰指针变量，放在 * 左边限制的是*p（限制的是指针指向的内容，不能通过指针变量来修改）
//	*p = 20;//err
//
//	//但是指针变量本身是可以改变的
//	p = &m;//ok
//
//	return 0;
//}


//int main()
//{
//	int n = 10;
//	int m = 100;
//
//	int* const p = &n;//const放在 * 右边，限制的是指针变量本身，指针不能改变它的指向
//	//但是可以通过指针变量修改它所指向的内容
//	*p = 20;//ok
//
//	p = &m;//err
//
//	return 0;
//}


//int main()
//{
//	int n = 10;
//	int m = 100;
//
//	int const* const p = &n;//两边都有const，则都限制了
//	*p = 20;//err
//
//	p = &m;//err
//
//	return 0;
//}




//四、指针运算
//1.指针+-整数
//指针类型决定了指针+1的步长，决定了指针解引用的权限
//数组在内存中是连续存放的
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = &arr[0];
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[sz - 1];
//	for (int i = sz - 1; i >= 0; i--)
//	{
//		printf("%d ", *p);
//		p--;
//	}
//	return 0;
//}


//2.指针-指针
//指针-指针的绝对值是指针和指针直接元素的个数
//计算的前提条件是两个指针指向的是同一块空间
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	return 0;
//}


//练习：写一个函数求字符串的长度
//写法1
//size_t my_strlen(char *p)
//{
//	int count = 0;
//	while (*p != '\0')
//	{
//		count++;
//		p++;
//	}
//	return count;
//}
//int main()
//{
//	char ch[] = "abcdef";
//	size_t len = my_strlen(ch);
//	printf("%zd\n", len);
//	return 0;
//}


//写法2
//size_t my_strlen(char* p)
//{
//	char* start = p;
//	char* end = p;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	char ch[] = "abcdef";
//	size_t len = my_strlen(ch);
//	printf("%zd\n", len);
//	return 0;
//}
//指针+指针？ --> 没意义


//3.指针的关系运算
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[0];
//	while (p < &arr[sz])
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}




//五、野指针
//野指针就是指针指向的位置是不可知的（随机的、不正确的，没有明确的限制）
//1.野指针的成因
//①指针未初始化
//int main()
//{
//	//一个局部变量不初始化，它的值是随机的
//	int* p;//p是局部变量，但是没有初始化，其值是随机的，如果将p中的值当作地址，解引用操作就会非法访问
//	*p = 20;//err
//	return 0;
//}


//②指针越界访问
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int* p = &arr[0];
//	for (i = 0; i <= 10; i++)
//	{
//		*p = i;
//		p++;
//	}
//	return 0;
//}


//③指针指向的空间释放
//int* test()
//{
//	int n = 100;
//	return &n; 
//}
//int main()
//{
//	int* p = test();
//	printf("%d\n", *p);
//	return 0;
//}


//2.如何避免野指针
//①指针初始化
//如果明确知道指针指向哪里就直接赋值地址，如果不知道指针应该指向哪里，可以给指针赋值NULL
//int main()
//{
//	int a = 10;
//	int* p1 = &a;//给一个明确的地址
//
//	int* p2 = NULL;//没有明确的地址
//	*p2 = 100;//err
//
//	return 0;
//}


//②小心指针越界
//一个程序向内存申请了哪些空间，通过指针也就只能访问哪些空间，不能超出范围访问，超出了就是越界访问


//③指针变量不再使用时，及时置NULL，指针使用之前检查有效性
//int main()
//{
//	int* p = NULL;
//	if (p != NULL)
//	{
//		*p = 200;
//	}
//
//	return 0;
//}


//④避免返回局部变量的地址




//六、assert断言
//aeeset.h头文件定义了宏assert()，用于在运行时确保程序符合指定条件，如果不符合，就报错终止运行，这个宏常常被称为“断言”
//#include<assert.h>
//int main()
//{
//	int* p = NULL;
//	assert(p != NULL);
//
//	return 0;
//}




//七、指针的使用和传址调用
//1.strlen的模拟实现
//求字符串长度，参数p指向的字符串不期望被修改
//#include<assert.h>
//size_t my_strlen(char const* p)
//{
//	size_t count = 0;
//	assert(p != NULL);//检测指针p是否有效
//
//	while (*p != '\0')
//	{
//		count++;
//		p++;
//	}
//	return count;
//}
//int main()
//{
//	char ch[] = "abcdef";
//	size_t len = my_strlen(ch);
//	printf("%zd\n", len);
//	return 0;
//}


//2.传值调用和传址调用
//例：写一个函数交换两个整型变量的值
//当实参传递给形参的时候，形参时实参的一份临时拷贝，对形参的修改不影响实参
//void Swap1(int x, int y)
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("交换前a=%d,b=%d\n", a, b);
//	Swap1(a, b);//传值调用
//	printf("交换后a=%d,b=%d\n", a, b);
//	return 0;
//}


//void Swap2(int* x, int* y)
//{
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("交换前a=%d,b=%d\n", a, b);
//	Swap2(&a, &b);//传址调用
//	printf("交换后a=%d,b=%d\n", a, b);
//	return 0;
//}