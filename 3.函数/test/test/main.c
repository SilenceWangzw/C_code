#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//函数是一个大型程序中的某部分代码，由一个或多个语句块组成

//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello bit";
//	strcpy(arr1, arr2);//将arr2的内容拷贝到arr1里面
//	printf("%s\n", arr1);
//	return 0;
//}


//memset - 内存设置
//int main()
//{
//	char arr[] = "hello bit";
//	memset(arr, 'x', 5); //将arr数组的前5个字节设置成x
//	printf("%s\n", arr);
//	return 0;
//}


//写一个函数，找出两个整数中的最大值
//int Max(int x, int y) {
//	return x > y ? x : y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	//函数的调用
//	int ret = Max(a, b);
//
//	printf("%d\n", ret);
//	return 0;
//}


//写一个函数交换两个整型变量
//函数返回类型的地方写成void表示这个函数不返回任何值
//实参可以是：常量、变量、表达式、函数等
//Swap1在被调用的时候，实参传给形参，其实形参是实参的一份临时拷贝
//改变形参，不能改变实参
//void Swap1(int a, int b) //传值调用
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//void Swap2(int *a, int *b) //传址调用
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前a=%d,b=%d\n", a, b);
//	Swap1(a, b); //实际参数---实参
//	Swap2(&a, &b);
//	printf("交换后a=%d,b=%d\n", a, b);
//	return 0;
//}


//练习1：写一个函数判断一个数是不是素数
//int is_prime(int n) {
//	int j = 0;
//	//2 -> n-1之间的数组试除
//	for (j = 2; j < n; j++) {
//		if (n % j == 0) {
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	//100-200之间的素数
//	int i = 0;
//	for (i = 100; i <= 200; i++) {
//		//判断i是否为素数
//		if (is_prime(i) == 1) 
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//练习2：写一个函数来判断是不是闰年,是闰年返回1，否则返回0
//一个函数如果不写返回类型，默认返回int类型
//int is_leap_year(int y) {
//	if ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0)) {
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++) {
//		if (is_leap_year(y) == 1) {
//			printf("%d ", y);
//		}
//	}
//	return 0;
//}


//练习3：写一个函数，实现整型数组的二分查找
//int binary_search(int arr[], int k, int sz) {
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right) {
//		int mid = (left + right) / 2;
//		if (arr[mid] < k) {
//			left = mid + 1;
//		}
//		else if (arr[mid] > k) {
//			right = mid - 1;
//		}
//		else {
//			return mid;
//		}
//	}
//	if (left > right) {
//		return -1;
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//找到了就返回找到位置的下标
//	//找不到返回-1
//	int ret = binary_search(arr, key, sz);
//	if (ret == -1) {
//		printf("找不到\n");
//	}
//	else {
//		printf("找到了，下标为:%d ", ret);
//	}
//	return 0;
//}


//练习4：写一个函数，每调用一次这个函数，就会将num的值加1
//void Add(int* num) {
//	(*num)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);//1
//
//	Add(&num);
//	printf("%d\n", num);//2
//
//	Add(&num);
//	printf("%d\n", num);//3
//	return 0;
//}


//函数的嵌套调用和链式访问(不能嵌套定义)
//int test2() {
//	printf("hehe\n");
//}
//int test() {
//	test2();
//}
//int main()
//{
//	test();
//	return 0;
//}

//int main()
//{
//	//int len = strlen("abc");
//	//printf("%d\n", len);
//
//	////链式访问
//	//printf("%d\n", strlen("abc"));
//
//	//char arr1[20] = { 0 };
//	//char arr2[] = "bit";
//	//printf("%s\n", strcpy(arr1, arr2));
//
//
//	//printf函数返回的是打印在屏幕上字符的个数
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}



//函数的定义与声明
//函数的声明一般放在头文件中
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	//函数声明一下 -- 告知
//	int Add(int, int);
//
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}
//
////函数的定义
//int Add(int x, int y) {
//	return x + y;
//}


//#include"add.h"
//
//int main() {
//	int a = 20;
//	int b = 10;
//	int sum = Add(a, b);
//	int sub = Sub(a, b);
//	printf("a+b = %d\n", sum);
//	printf("a-b = %d\n", sub);
//	return 0;
//}



//函数的递归
//一个过程或函数在其定义或说明中有直接或间接调用自身的一种方法
//它通常把一个大型复杂的问题层层转化为一个与原问题相似的规模较小的问题来求解
//两个必要条件：1.存在限制条件，当满足这个限制条件的时候，递归便不再继续
//				2.每次递归调用之后越来越接近这个限制条件


//练习1：接受一个整型值（无符号），按找顺序打印它的每一位
//void print(unsigned int n) {
//	if (n > 9) {
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	//递归---函数自己调用自己
//	print(num);//print函数可以打印参数部分数字的每一位
//
//	return 0;
//}


//内存分为：栈区、堆区、静态区
//栈区：局部变量、函数形参
//堆区：动态内存分配（malloc/free\calloc,realloc）
//静态区：全局变量、静态变量
//每次调用都会在栈区内开辟空间,递归层数太多，则会栈溢出
//写递归代码的时候
//1.不能死递归，得有跳出条件，每次递归要逼近跳出条件
//2.递归的层次不能太深
//void test(int n) {
//	if (n < 10000) 
//	{
//		test(n + 1);//Stack overflow
//	}
//}
//int main()
//{
//	test(1);
//
//	return 0;
//}


//练习2：编写函数不允许创建临时变量，求字符串的长度
//int my_strlen(char* str) {
//	if (*str != '\0') {
//		return 1 + my_strlen(str + 1);//不能使用++str，否则会改变str
//	}
//	else {
//		return 0;
//	}
//}
//int main()
//{
//	char arr[] = "bit";
//	//模拟实现一个strlen函数
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}


//递归与迭代
//练习3：求n的阶乘

//循环(迭代)写法
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++) {
//		ret = ret * i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}


//int Fac(int n) {
//	if (n <= 1) {
//		return 1;
//	}
//	else {
//		return n * Fac(n - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("%d\n", ret);
//	return 0;
//}
//有一些功能，可以使用迭代的方式实现，也可以使用递归



//练习4：求第n个斐波那契数
//递归写法----可以求解，但效率太低
//int Fib(int n) {
//	if (n <= 2) {
//		return 1;
//	}
//	else{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}


//循环写法
//1 1 2 3 5 8
//a b c
//int Fib(int n) {
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2) {
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}


//编写程序数一下1-100的所有整数中出现多少个数字9
//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 1; i <= 100; i++) {
//		if (i % 10 == 9) {
//			count++;
//		}
//		if (i / 10 == 9) {
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}



//计算1/1-1/2+1/3+......-1/100
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++) {
//		sum += flag * (1.0 / i);
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}


//求10个整数中最大值
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		if (arr[i] > max) {
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//
//	return 0;
//}


//在屏幕上输出乘法口诀表
//int main()
//{
//	int i = 1;
//	int j = 1;
//	for (i = 1; i <= 9; i++) {
//		for (j = 1; j <= i; j++) {
//			printf("%d*%d=%-2d ", j, i, i * j);//2d占两位右对齐，-2d占两位左对齐
//		}
//		printf("\n");
//	}
//	return 0;
//}


//练习1：实现一个函数，打印乘法口诀表，行数列数自己指定
//void print_table(int n) {
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= n; i++) {
//		for (j = 1; j <= i; j++) {
//			printf("%d*%d=%-2d ", j, i, i * j);
//		}
//		printf("\n");
//	}
//}
//
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//	return 0;
//}



//练习2：字符串逆序
//int my_strlen(char* str) {
//	int count = 0;
//	while (*str != '\0') {
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse_string(char* str) {
//	int left = 0;
//	int right = my_strlen(str) - 1;
//	while (left < right) {
//		char tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);//fedcba
//	return 0;
//}


//练习3：写一个函数，输入一个非负整数，返回组成它的数字之和
//int DigitSum(int n) {
//	if (n > 9) {
//		return DigitSum(n / 10) + n % 10;
//	}
//	else {
//		return n;
//	}
//}
//int main()
//{
//	int num = 1729;
//	int sum = DigitSum(num);
//	printf("%d\n", sum);
//	return 0;
//}


//练习4：递归实现n的k次方(非负)
int Pow(int n, int k) {
	if (k > 0) {
		return n * Pow(n, k - 1);
	}
	else if (k == 0) {
		return 1;
	}
}
int main() {
	int n = 0;
	int k = 0;
	scanf("%d%d", &n, &k);
	int ret = Pow(n, k);
	printf("%d\n", ret);
	return 0;
}