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
//	const char* p = "abcdef"; //把字符串首字符a的地址赋值给了p，加const是为了限制常量字符串不被修改
//	printf("%s\n", p); //p只是提供一个地址，打印到直到遇到\0
//	return 0;
//}


//一道笔试题
//int main()
//{
//	const char* p1 = "abcdef"; //放在内存里的只读数据区，不需要存在多份
//	const char* p2 = "abcdef";
//
//	char arr1[] = "abcdef";//两个独立的数组，内存中的空间不同
//	char arr2[] = "abcdef";
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
//			//*(p+i) <===> p[i]
//			printf("%d ", *(*(parr + i) + j));
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
//	int(*p)[10] = &arr;
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
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//	print1(arr, 3, 5);
//	print2(arr, 3, 5);
//
//	return 0;
//}





//四、数组传参和指针传参


//五、函数指针


//六、函数指针数组


//七、指向函数指针数组的指针


//八、回调函数


//九、指针和数组面试题的解析