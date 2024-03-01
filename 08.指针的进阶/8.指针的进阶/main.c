#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//回顾：
//1.指针就是个变量，用来存放地址，地址唯一标识一块内存空间
//2.指针的大小是固定的4/8字节(32位平台/64位平台)
//3.指针是有类型，指针的类型决定了指针的+-整数的步长，指针解引用操作的时候的权限
//4.指针的运算

//一、字符指针
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
//	//本质上是把"hello bit"这个字符串的首字符的地址存储在了ps中
//	char* ps = "hello bit";
//
//	printf("%c\n", *ps);//h
//
//	return 0;
//}


//int main()
//{
//	//这里是把"hello bit"这个字符串放到了arr数组中
//	char arr[] = "hello bit";
//	printf("%s\n", arr); //arr代表的是数组起始位置的地址
//	return 0;
//}


//一道笔试题
//常量字符串不能修改，所以加上const，防止误操作
//int main()
//{
//	const char* p1 = "hello bit"; //放在内存里的只读数据区，不需要存在多份
//	const char* p2 = "hello bit";
//
//	char arr1[] = "hello bit";//两个独立的数组，内存中的空间不同
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




//二、指针数组
//指针数组是一个存放指针的数组
//int main()
//{
//	int arr[10];//整型数组
//	char ch[5];//字符数组
//
//	int* arr2[6];//存放整型指针的数组，数组中的每个元素都是int*类型
//	char* arr3[5];//存放字符指针的数组，数组中的每个元素都是char*类型
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
//		printf("%d ", *(arr[i])); //不推荐这种用法
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
//			//printf("%d ", *(*(parr + i) + j)); //写法1
//			//printf("%d ", *(parr[i] + j)); //写法2
//			printf("%d ", parr[i][j]); //写法3
//		}
//		printf("\n");
//	}
//	return 0;
//}




//三、数组指针
//整型指针 - 指向整型的指针
//字符指针 - 指向字符的指针
//数组指针 - 指向数组的指针
// int(*p)[10];  p可以指向一个数组，该数组有10个元素，每个元素是int型


//再次讨论数组名
//数组名通常表示的都是数组首元素的地址
//但是有两个例外
//①：sizeof(数组名)，这里的数组名表示整个数组，计算的是整个数组的大小(单位是字节)
//②：&数组名，这里的数组名表示的依然是整个数组，所以&数组是取出的是整个数组的地址
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
//	//p就是一个数组指针，存放的是数组的地址，指向int[10]类型的数组
//	int(*p)[10] = &arr; //害怕p和[]先结合，所以加上()
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
//	double* (*pd)[5] = &d; //pd是一个数组指针
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;
//	
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//不推荐使用这种写法
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(*p + i));//p是指向数组的，*p其实就相当于数组名，数组名又是首元素的地址，所以*p本质上是数组首元素的地址
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
//			printf("%d ", *(*(p + i) + j)); //找到第i行，下标为j的元素
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//	print1(arr, 3, 5);
//	print2(arr, 3, 5); //arr数组名，表示数组首元素的地址,二维数组首元素是第一行，第一行是个int arr[5]的数组
//
//	return 0;
//}




//四、数组参数和指针参数
//1.一维数组传参
//void test(int arr[]) //ok? -- 正确
//{}
//void test(int arr[10]) //ok? -- 正确
//{}
//void test(int *arr) //ok? -- 正确
//{}
//void test2(int *arr[20]) //ok? -- 正确
//{}
//void test2(int **arr) //ok? -- 正确 -- arr2的首元素是int*类型，用二级指针接收
//{}
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 }; //存放int*的数组
//	test(arr);
//	test2(arr2);
//
//	return 0;
//}


//2.二维数组传参
//void test(int arr[3][5]) // ok? -- 正确
//{}
//void test(int arr[][]) //ok? -- 错误，不能省略列
//{}
//void test(int arr[][5]) //ok? -- 正确
//{}
//void test(int* arr) //ok? -- 错误，第一行是个数组的地址
//{}
//void test(int *arr[5]) //ok? -- 错误，数组的地址不能用指针数组来接收
//{}
//void test(int(*arr)[5]) //ok? -- 正确
//{}
//void test(int **arr) //ok? -- 错误，传过去的是数组的地址，匹配不上
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);//二维数组名传的是第一行的地址
//	return 0;
//}


//3.一级指针传参
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
//	//一级指针p，传给函数
//	print(p, sz);
//
//	return 0;
//}


//4.二级指针传参
//void test(int** p2)
//{
//	**p2 = 20;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a; //pa是一级指针
//	int** ppa = &pa; //ppa是二级指针
//
//	//把二级指针进行传参
//	test(ppa);
//	printf("%d\n", a);
//	return 0;
//}




//五、函数指针 -- 指向函数的指针 -- 存放函数地址的指针
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
//	int(*parr)[10] = &arr; //parr是指向数组的指针，存放的是数组的地址
//
//	//函数指针 -- 存放函数地址的指针
//	//&函数名 -- 取到的就是函数的地址
//	//pf就是一个函数指针变量
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


//通过函数指针调用
//写法1：
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int(*pf)(int, int) = &Add;
//	int ret = (*pf)(3, 5); //通过*pf找到Add函数
//	printf("%d\n", ret);
//
//	return 0;
//}


//写法2：
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


//阅读两段有趣的代码
//1.
//int main()
//{
//	(*(void(*)())0)();
//	//调用0地址处的函数
//	//该函数无参，返回类型是void
//	//①：void(*)() -- 函数指针类型
//	//②：(void(*)())0 -- 对0进行强制类型转换，被解释为一个函数的地址
//	//③：*(void(*)())0 -- 对0地址进行了解引用操作
//	//④：(*(void(*)())0)() -- 调用0地址处的函数
//
//	return 0;
//}


//2.
//int main()
//{
//	void(*signal(int, void(*)(int)))(int);
//	//①：signal和()先结合，说明signal是函数名
//	//②：signal函数的第一个参数的类型是int，第二个参数的类型是函数指针，该函数指针指向一个参数为int，返回类型是void的函数
//	//③：signal函数的返回类型也是也是一个函数指针，该函数指针指向一个参数为int，返回类型是void的函数
//	//signal是一个函数的声明
//
//	//简化:
//	void(*)(int)signal(int, void(*)(int)); //语法错误
//
//	typedef void(*pfun_t)(int); //对void(*)(int)的函数指针类型重命名为pfun_t
//	pfun_t signal(int, pfun_t);
//
//	return 0;
//}




//六、函数指针数组 -- 存放函数指针的数组
//整型指针 int*
//整型指针数组 int *arr[5];
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
//	int (*pfArr[2])(int, int) = { pf1,pf2 };//pfArr就是函数指针数组
//
//	return 0;
//}


//应用
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
//	//计算器 - 计算整型变量的加、减、乘、除
//	int input = 0;
//	do {
//		menu();
//		int ret = 0;
//		printf("请选择:> ");
//		int x = 0;
//		int y = 0;
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个操作数:> ");
//			scanf("%d%d", &x, &y);
//			ret = Add(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 2:
//			printf("请输入两个操作数:> ");
//			scanf("%d%d", &x, &y);
//			ret = Sub(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 3:
//			printf("请输入两个操作数:> ");
//			scanf("%d%d", &x, &y);
//			ret = Mul(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 4:
//			printf("请输入两个操作数:> ");
//			scanf("%d%d", &x, &y);
//			ret = Div(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 0:
//			printf("退出程序\n");
//			break;
//		default:
//			printf("选择错误，请重新输入\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}


//修改版
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
//	//计算器 - 计算整型变量的加、减、乘、除
//	int input = 0;
//	do {
//		menu();
//		//pfArr就是函数指针数组
//		int(*pfArr[5])(int, int) = { NULL,Add,Sub,Mul,Div };
//		int ret = 0;
//		int x = 0;
//		int y = 0;
//		printf("请选择:> ");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4) {
//			printf("请输入两个操作数:> ");
//			scanf("%d%d", &x, &y);
//
//			ret = (pfArr[input])(x, y); //传参调用这个函数
//			printf("%d\n", ret);
//		}
//		else if(input == 0)
//		{
//			printf("退出程序\n");
//			break;
//		}
//		else {
//			printf("选择错误\n");
//		}
//	} while (input);
//
//	return 0;
//}




//七、指向函数指针数组的指针(了解)
//int main()
//{
//	int(*p)(int, int);//函数指针
//	int(*p2[4])(int, int);//函数指针的数组
//	int(*(*p3)[4])(int, int) = &p2;//取出的是函数指针数组的地址,p3就是一个指向函数指针数组的指针
//	
//	return 0;
//}


//int main()
//{
//	int arr[10];
//	//数组元素类型 -- int
//	//arr数组的类型是 int[10]
//
//	return 0;
//}




//八、回调函数
//通过函数指针调用的函数
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
	printf("请输入两个操作数:> ");
	scanf("%d%d", &x, &y);
	return pf(x, y); //通过函数指针调用，称为回调函数
}
int main()
{
	//计算器 - 计算整型变量的加、减、乘、除
	int input = 0;
	do {
		menu();
		int ret = 0;
		printf("请选择:> ");
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
			printf("退出程序\n");
			break;
		default:
			printf("选择错误，请重新输入\n");
			break;
		}
	} while (input);

	return 0;
}



//九、指针和数组面试题的解析