#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//1.算术操作符
//+  -  *  /  %
//取模操作符的两个操作数必须为整数
//int main()
//{
//	int a = 6 / 5;//整数除法只会得到整数
//	printf("%d\n", a);
//
//	float b = 6 / 5;
//	printf("%f\n", b);
//
//	double c = 6.0 / 5;
//	printf("%lf\n", c);
//
//	return 0;
//}




//2.移位操作符
//左移：<< 左边丢弃，右边补0
//int main()
//{
//	int a = 2; //4个字节（32位）
//	int b = a << 1;
//	//a
//	//00000000000000000000000000000010
//	//b
//	//00000000000000000000000000000100
//	printf("%d\n", b);
//	return 0;
//}


//右移：>>
//算术右移：右边丢弃，左边补原符号位
//逻辑右移：右边丢弃，左边补0
//int main()
//{
//	int a = 10;
//	int b = a >> 1;
//	//a
//	//0000000000000000000000000001010
//	//b
//	//0000000000000000000000000000101
//	printf("%d\n", b);
//	return 0;
//}


//整数的二进制表示形式有三种
//原码：直接根据数值写出的二进制序列
//反码：原码的符号位不变，其他位按位取反
//补码：反码+1 (内存中存放的是补码)
//正数的原反补相同
//int main()
//{
//	int a = -1;
//	int b = a >> 1;
//	//a
//	//1000000000000000000000000000001 -- 原码
//	//1111111111111111111111111111110 -- 反码
//	//1111111111111111111111111111111 -- 补码
//	//向右移动一位
//	//1111111111111111111111111111111
//	printf("%d\n", b);
//
//	return 0;
//}




//3.位操作符
// &  |  ^ (与  或  异或)
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a & b;
//	//a -- 0000000000000000000000000000011
//	//b -- 0000000000000000000000000000101
//	//按位与(有0则0)
//	//c -- 0000000000000000000000000000001
//	printf("%d\n", c);
//
//	return 0;
//}


//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a | b;
//	//a -- 0000000000000000000000000000011
//	//b -- 0000000000000000000000000000101
//	//或(有1则1)
//	//c -- 0000000000000000000000000000111
//	printf("%d\n", c);
//
//	return 0;
//}


//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a ^ b;
//	//a - 00000000000000000000000000000011
//	//b - 00000000000000000000000000000101
//	//按位异或(相同为0，相异为1)
//	//c - 00000000000000000000000000000110
//	printf("%d\n", c);
//	return 0;
//}


//一道面试题：交换a和b的值，不使用第三个变量
//写法1（缺陷：数值太大会溢出）
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("交换前：a = %d,b=%d\n", a, b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("交换后：a = %d,b=%d\n", a, b);
//	return 0;
//}


//写法2：异或操作符
//a^b^b=a 任何两个相同数字异或为0
//a^0 = a
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("交换前：a = %d,b=%d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("交换后：a = %d,b=%d\n", a, b);
//
//	return 0;
//}


//将某一位置成1或0
//int main()
//{
//	int a = 13;
//	//把a的二进制位中的第5位置成1
//	a = a | (1 << 4);
//	//00000000000000000000000000001101
//	//00000000000000000000000000010000 --- 1<<4
//	//00000000000000000000000000011101
//	printf("%d\n", a);
//
//
//	//把a的二进制位中的第5位置为0
//	a = a & ~(1 << 4);
//	//00000000000000000000000000011101
//	//11111111111111111111111111101111 -- 1<<4按位取反
//	//00000000000000000000000000001101
//
//	return 0;
//}




//4.赋值运算符
// =  +=  -=  *=  /=  %=  <<=  >>=
//int main()
//{
//	int a = 10;
//	a = 100;
//	a += 100; //a = a + 100
//	printf("%d\n", a);
//	return 0;
//}




//5.单目操作符 -- 只有一个操作数
// !  -  +  &  sizeof  ~  ++  --  *  (类型)
//int main()
//{
//	int flag = 5;
//	//flag为真
//	if (flag)
//	{
//		printf("hehe\n");
//	}
//	//flag为假
//	if (!flag)
//	{
//		printf("haha\n");
//	}
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	a = -a;
//	printf("%d\n", a);
//	return 0;
//}


//sizeof()是一个操作符，不是函数
//int main()
//{
//	//int a = 10;
//	//char arr[10] = { 0 };
//	//printf("%d\n", sizeof(a));//计算a所占空间大小，单位是字节
//	//printf("%d\n", sizeof(int));
//	//printf("%d\n", sizeof a); //计算变量的大小可以省略括号
//	//printf("%d\n", sizeof(arr));
//
//
//	short s = 5;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 2));//sizeof括号中放的表达式是不参与运算的
//	printf("%d\n", s);
//
//	return 0;
//}


//int main()
//{
//	int a = -1;
//	//10000000000000000000000000000001 - 原码
//	//11111111111111111111111111111110 - 反码
//	//11111111111111111111111111111111 - 补码
//	int b = ~a;
//	//按位取反
//	//00000000000000000000000000000000
//	printf("%d\n", b);
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = a++;//后置++：先使用再++
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	printf("%p\n", &a); //& - 取地址操作符
//	int* pa = &a; //pa是用来存放地址的 - pa就是一个指针变量
//	// * - 解引用操作符 - 简介访问操作符
//	return 0;
//}


//int main()
//{
//	int a = (int)3.14;//把3.14强制转换成int类型
//	
//	return 0;
//}




//6.关系操作符
//>  >=  <  <=  !=  ==
//int main()
//{
//	int a = 3;
//	int b = 5;
//	if (a == b) {
//		printf("hehe\n");
//	}
//	return 0;
//}
//注：比较两个字符串相等，不能使用==，要用strcmp




//7.逻辑操作符
// &&  ||
//int main()
//{
//	int a = 3;
//	int b = 0;
//	if (a && b) {
//		printf("hehe\n");
//	}
//	if (a || b) {
//		printf("haha\n");
//	}
//	return 0;
//}


//笔试题
//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//	return 0;
//}




//8.条件操作符(三目操作符)
//int main()
//{
//	int a = 3;
//	int b = 0;
//	b = (a > 5 ? 1 : -1);
//	printf("%d\n", b);
//	return 0;
//}




//9.逗号表达式
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = 0;
//	//逗号表达式要从左向右依次计算，但是整个表达式的结果是最后一个表达式的结果
//	int d = (c = 5, a = c + 3, b = a - 4, c += 5);
//	printf("d = %d\n", d);
//	return 0;
//}




//10.下标引用、函数调用和结构成员
//下标引用操作符(访问数组)
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", arr[4]); //  [] --- 下标引用操作符
//	// [] 的操作数是2个：arr,4
//	return 0;
//}

//函数调用操作符
//int Add(int x, int y) {
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数调用
//	int ret = Add(a, b); // () --- 函数调用操作符
//	//操作数3个：Add,a,b
//	return 0;
//}

//结构成员访问操作符
// . 
// ->
//struct Book {
//	//结构体的成员(变量)
//	char name[20];
//	char id[20];
//	int price;
//};
//int main()
//{
//	//结构体变量名.成员名
//	struct Book b = { "C语言","C20240119",55 };
//	printf("书名:%s\n", b.name);
//	printf("id:%s\n", b.id);
//	printf("价格:%d\n", b.price);
//
//	return 0;
//}


//struct Book {
//	//结构体的成员(变量)
//	char name[20];
//	char id[20];
//	int price;
//};
//int main()
//{
//	//结构体指针->成员名
//	struct Book b = { "C语言", "C20240119", 55 };
//	struct Book* pb = &b;
//
//	//写法1
//	printf("书名：%s\n", (*pb).name);
//	printf("id：%s\n",(*pb).id);
//	printf("价格：%d", (*pb).price);
//
//	//写法2
//	printf("书名：%s\n", pb->name);
//	printf("id：%s\n", pb->id);
//	printf("价格：%d", pb->price);
//
//	return 0;
//}




//11.隐式类型转换
//整型提升：整型提升是按照变量的数据类型的符号位来提升的
//int main()
//{
//	char a = 3;
//	//00000000000000000000000000000011
//	//00000011 -- a
//	char b = 127;
//	//00000000000000000000000001111111
//	//01111111 -- b
//	char c = a + b;
//	//00000000000000000000000000000011
//	//00000000000000000000000001111111 +
//	//------------------------------------
//	//00000000000000000000000010000010
//	//10000010 -- c
//	//a和b都是char类型的，都没有达到一个int大小
//	//这里就会发生整型提升
//
//	printf("%d\n", c);
//	//10000010 -- c
//	//11111111111111111111111110000010（整型提升） -- 补码
//	//10000000000000000000000001111101  -- 反码
//	//10000000000000000000000001111110  -- 原码  --  -126
//
//	return 0;
//}



//算术转换
//int main()
//{
//	int a = 4;
//	float f = 4.5f;
//	a + f;//int会转换成float(低精度转向高精度)
//	return 0;
//}




//12.操作符的属性
//操作符的优先级
//操作符的结合性
//是否控制求值顺序
//int main()
//{
//	int a = 4;
//	int b = 5;
//	int c = a + b * 7;//优先级决定了计算顺序
//	int d = a + b + c;//优先级相同，结合性决定计算顺序
//	return 0;
//}




//练习1
//int main()
//{
//	char str[] = "hello bit";
//	printf("%d\n", sizeof(str));//10
//	printf("%d\n", strlen(str));//9
//	//strlen -- 函数 -- 求字符串长度，找\0之前出现的字符个数
//	//sizeof -- 操作符 -- 计算变量/类型所占内存大小，单位是字节
//	return 0;
//}


//练习2
//实现init()初始化数组全为0
//实现print()打印数组的每个元素
//void init(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[10];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	init(arr, sz);
//	print(arr, sz);
//	return 0;
//}


//练习3：实现reverse()函数完成数组元素的逆置
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	reverse(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}


//练习4：交换数组
int main()
{
	char arr1[] = "hello bit";
	char arr2[] = "HELLO BIT";
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	int left = 0;
	while (arr1[left] != '\0')
	{
		char tmp = arr1[left];
		arr1[left] = arr2[left];
		arr2[left] = tmp;
		left++;
	}
	printf("arr1 = %s\n", arr1);
	printf("arr2 = %s\n", arr2);
	return 0;
}