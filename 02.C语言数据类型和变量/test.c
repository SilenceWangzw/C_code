#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//一、数据类型介绍
//生活中有各种各样的数据，编程是为了解决生活中的问题
//计算机语言来写代码 -- 得有能力描述生活中的问题
//编译器只有知道了数据的类型，才知道怎么操作数据
//C语言把类型分为两类
//1.内置类型（C语言本身就具有的）：字符型、整型、浮点型、布尔类型
//2.自定义类型（自己创造的）：数组、结构体、枚举、联合体


//布尔类型 -- 用来表示真假
//使用布尔类型要引用头文件stdbool.h
//C语言中规定0表示假，非0表示真
//#include<stdbool.h>
//int main()
//{
//	_Bool flag1 = true;//写法1
//	bool flag2 = false;//写法2
//	if (flag1)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}


//各种数据类型的长度
//每一种数据类型都有自己的长度，使用不同的数据类型，能够创建出长度不同的变量
//变量的长度不同，存储的数据范围就有所差异
//sizeof是一个关键字，也是操作符，用来计算操作数的类型长度的，单位是字节
//sizeof操作符的操作数可以是类型，也可以是变量或者表达式
//int main()
//{
//	printf("%zd\n", sizeof(_Bool));
//	printf("%zd\n", sizeof(char));
//	printf("%zd\n", sizeof(short));
//	printf("%zd\n", sizeof(int));
//	printf("%zd\n", sizeof(long));
//	printf("%zd\n", sizeof(long long));
//	printf("%zd\n", sizeof(float));
//	printf("%zd\n", sizeof(double));
//	printf("%zd\n", sizeof(long double));
//	return 0;
//}
//C语言标准规定：sizeof(long) >= sizeof(int)


//int main()
//{
//	int a = 10;
//	printf("%zd\n", sizeof(int));
//	printf("%zd\n", sizeof(a));
//	printf("%zd\n", sizeof a);//里面放的是表达式或变量是，括号可省略，类型不能省略括号
//	return 0;
//}


//int main()
//{
//	short s = 2;
//	int b = 10;
//	printf("%zd\n", sizeof(s = b + 1));//sizeof中如果放的是表达式，表达式不会真实计算
//	printf("%d\n", s);
//	return 0;
//}




//二、signed和unsigned
//C语言中使用signed和unsigned关键字修饰字符型和整型的
//signed关键字：表示一个类型带有正负号，包含负值
//unsigned关键字：表示该类型不带有正负号，只能表示零和正整数
//int main()
//{
//	//signed int --- 有符号的int
//	signed int num1 = 100;
//	num1 = -200;
//
//	//unsigned int -- 无符号的int
//	unsigned int num2 = 100;
//	num2 = 1000;
//	return 0;
//}
//char到底是有符号还是无符号呢？这个不确定，是取决于编译器的实现
//大部分编译器上 char == signed char


//int == signed int
//对于有符号的整数打印应该使用%d
//对于无符号整数的对于应该使用%u
//int main()
//{
//	int num = -100;
//	printf("%d\n", num);
//	return 0;
//}




//三、变量
//1.变量的创建
//int main()
//{
//	unsigned int age;//整型变量
//	char ch;//字符变量
//	float score;//单精度浮点型变量
//	double weight;//双精度浮点型变量
//	return 0;
//}


//2.变量的初始化
//创建变量的同时赋值，就叫做给变量初始化
//如果未初始化，里面存放的是随机值
//int main()
//{
//	unsigned int age = 10;
//	age = 20;//赋值
//	printf("%u\n", age);
//
//	char ch = 'q';
//	printf("%c\n", ch);
//
//	float score = 3.14f;//如果不加f，默认是double类型
//	printf("%f\n", score);
//
//	double weight = 4.5;
//	printf("%lf\n", weight);
//
//	return 0;
//}


//3.变量的分类
//全局变量：在大括号外部定义的变量就是全局变量
//局部变量：在大括号内部定义的变量就是局部变量
//int num = 100;//全局变量
//int main()
//{
//	int num = 10;//局部变量
//	printf("%d\n", num);
//	return 0;
//}
//注：当局部变量和全局变量名字相同，局部变量优先使用




//四、算术操作符
//操作符也叫运算符
// +  -  *  /  %
//int main()
//{
//	printf("%d\n", 33 + 42);//  + 称为操作符，33和42称为操作数，分别为左操作数和右操作数，所以 + 也是双目操作符
//	int a = 10;
//	int b = 20;
//	printf("%d\n", a + b);
//	printf("%d\n", a + 23);
//	return 0;
//}


//int main()
//{
//	printf("%d\n", 33 - 42);//  + 称为操作符，33和42称为操作数，分别为左操作数和右操作数，所以 + 也是双目操作符
//	int a = 10;
//	int b = 20;
//	printf("%d\n", a - b);
//	printf("%d\n", a - 23);
//	return 0;
//}


//int main()
//{
//	printf("%d\n", 5 * 5);
//	int a = 10;
//	int b = 20;
//	printf("%d\n", a * b);
//	return 0;
//}


//int main()
//{
//	//除号的两端如果是整数，得到的也是整数
//	printf("%d\n", 9 / 3);
//	printf("%d\n", 9 / 4);
//	printf("%d\n", 10 / 4);
//
//	//除号两端至少有一个小数，得到的就是小数
//	printf("%f\n", 10 / 4.0);
//	printf("%f\n", 10.0 / 4);
//	return 0;
//}


//int main()
//{
//	printf("%d\n", 10 % 3);
//	int n = 0;
//	if (n % 2 == 0)
//	{
//		printf("偶数\n");
//	}
//	return 0;
//}
//注：取模运算符操作数不能是小数


//负数求模的规则：结果的正负号由第一个运算数的正负号决定
//int main()
//{
//	printf("%d\n", 11 % -5);//1
//	printf("%d\n", -11 % -5);//-1
//	printf("%d\n", -11 % 5);//-1
//	return 0;
//}




//五、赋值操作符
//int main()
//{
//	int a = 0;//初始化
//	a = 10;//赋值,  = 是赋值操作符
//	return 0;
//}


//1.连续赋值
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = 0;
//	c = b = a + 3;//连续赋值，从右向左依次赋值 --- 不推荐使用
//	return 0;
//}


//2.复合赋值
// +=  -=  *=  /=  %=
//int main()
//{
//	int a = 0;
//	a += 10;// 等价于 a = a + 10;
//	return 0;
//}




//六、单目操作符
// ++  --  +(正号)  -(负号)
//int main()
//{
//	int a = 5;
//	a++;
//	printf("%d\n", a);//6
//	return 0;
//}


//int main()
//{
//	int a = 5;
//	int b = ++a;//前置++  ---  先++后使用
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}


//int main()
//{
//	int a = 5;
//	int b = a++;//后置++  ---  先使用后++
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	printf("%d\n", +10);//10
//	printf("%d\n", a);//10
//	printf("%d\n", -a);//-10
//	return 0;
//}




//七、强制类型转换
//int main()
//{
//	int a = (int)3.14; //将3.14强制转换成int类型，保留整数部分，小数部分丢弃
//	printf("%d\n", a);
//
//	return 0;
//}