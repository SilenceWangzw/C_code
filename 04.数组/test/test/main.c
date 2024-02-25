#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//一.一维数组的创建和初始化
//数组是一组相同类型元素的集合
//数组的创建
//int main()
//{
//	int arr[8];
//	char ch[5];
//
//	//数组大小必须为常量，不能为变量
//	//只有C99语法支持---变长数组
//	int n = 8;
//	int arr1[n];
//	return 0;
//}

//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };//完全初始化
//	int arr2[10] = { 1,2,3,4,5 };//不完全初始化
//	int arr3[] = { 1,2,3,4,5 };//数组长度可省略，会根据数组内容确定长度
//	char ch1[5] = { 'b','i','t' };
//	char ch2[] = { 'b','i','t' };
//
//	char ch3[5] = "bit";// b i t \0 0 ----- 5个元素
//	char ch4[] = "bit";//b i t \0 ----- 4个元素
//
//	char ch5[] = "bit";//末尾默认放了\0
//	char ch6[] = { 'b','i','t' };//没有\0，打印出来乱码
//	printf("%s\n", ch5);
//	printf("%s\n", ch6);//乱码
//	printf("%d\n", strlen(ch5));
//	printf("%d\n", strlen(ch6));//随机值
//
//	return 0;
//}


//二.一维数组的使用
//数组的下标从0开始
//数组的大小是可以通过计算得到的
//int main()
//{
//	int arr[10] = { 0 };
//	arr[4] = 5;// []下标引用操作符
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//三.一维数组在内存中的存储
//%p - 是按地址的格式打印 - 十六进制的打印
//一维数组在内存中是连续存放的
//随着数组下标的增长，地址是由低到高变化的
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}


//四.二维数组的创建和初始化
//二维数组的创建
//int main()
//{
//	int arr[3][4];//三行四列
//	char ch[3][10];//三行十列
//	return 0;
//}

//二维数组的初始化
//int main()
//{
//	int arr1[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	int arr2[3][4] = { 1,2,3,4,5};//不完全初始化，剩余默认补0
//	int arr3[3][4] = { {1,2},{3,4},{5,6} };
//	int arr4[][4] = { {1,2},{3,4},{5,6} };//可以省略行，但不能省略列
//
//	return 0;
//}


//五.二维数组的使用
//二维数组的使用也是通过下标访问
//int main()
//{
//	int arr[3][4] = { {1,2},{3,4},{5,6} };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++) {
//		for (j = 0; j < 4; j++) {
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//六.二维数组在内存中的存储
//二维数组在内存中也是连续存放的
//一行内部连续，跨行也是连续的
//int main()
//{
//	int arr[3][4] = { {1,2},{3,4},{5,6} };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++) {
//		for (j = 0; j < 4; j++) {
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { {1,2},{3,4},{5,6} };
//	int i = 0;
//	int j = 0;
//	int* p = &arr[0][0];
//	for (i = 0; i < 12; i++) {
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}


//七.数组作为函数参数
//void bubble_sort(int arr[],int sz) //形参arr本质是指针
//{
//	//确定趟数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++) {
//		//一趟冒泡排序的过程
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++) {
//			if (arr[j] > arr[j + 1]) {
//				//前面大于后面，交换
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	//计算数组元素个数
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//排序为升序 - 冒泡排序
//	bubble_sort(arr, sz);//数组传参的时候，传递的是数组首元素地址
//	for (int i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//数组名是什么
//数组名是数组首元素的地址
//但是有两个例外
//1.sizeof(数组名) --- 数组名表示整个数组 - 计算的是整个数组的大小单位是字节
//2. &数组名 - 数组名表示整个数组 - 取出的是整个数组的地址
int main()
{
	int arr[10] = { 0 };
	printf("%p\n", &arr[0]);
	printf("%p\n", arr);//数组名是首元素的地址
	printf("%p\n", &arr);//整个数组的地址
	printf("---------------------------------\n");
	printf("%p\n", &arr[0] + 1);
	printf("%p\n", arr + 1);
	printf("%p\n", &arr + 1);//直接跳过整个数组
	return 0;
}