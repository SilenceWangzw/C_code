#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//一、第一个程序
//1.写出主函数(main函数) --- C语言是从主函数的第一行开始执行的
//写个代码在屏幕上打印：比特
//printf -- 库函数 -- 在屏幕上打印信息的
//printf的使用，引用头文件 stdio.h
//int main()
//{
//	printf("比特\n");
//	return 0;
//}
//编译+链接+运行代码



//二、数据类型
//计算机语言 - 写程序 - 解决生活中的问题
//必须有能力来描述生活中的问题
//购物商城 - 上架商品，价格 - 15.6元 - 小数
//年龄 - 50 - 整数
//int main()
//{
//	//字符类型
//	char ch = 'a';
//	//整型
//	int age = 20;
//	//短整型
//	short num = 10;
//	//浮点型(单精度浮点型)
//	float = weight = 55.5;
//	//浮点型(双精度浮点型)
//	double d = 0.0;
//	return 0;
//}


//每种类型的大小是多少
//int main()
//{
//	//sizeof() -- 关键字 -- 操作符 -- 计算类型或者变量所占空间大小
//	printf("char size is %d\n", sizeof(char));//1bite
//	printf("short size is %d\n", sizeof(short));//2bite
//	printf("int size is %d\n", sizeof(int));//4bite
//	printf("long size is %d\n", sizeof(long));//4bite
//	printf("long long size is %d\n", sizeof(long long));//8bite
//	printf("float size is %d\n", sizeof(float));//4bite
//	printf("double size is %d\n", sizeof(double));//8bite
//	return 0;
//}



//三、常量变量
//生活中有些数据不能变：血型、性别、圆周率
//有些数据一定可变：工资、年龄、体重
//C语言描述 -- 常量（不能改变的量） -- 变量（能被改变的量）
//int main()
//{
	//创建一个变量
//	int age = 20;
//	double weight = 75.3;
//
//	age = age + 1;
//	weight = weight - 10;
//
//	printf("%d\n", age);
//	printf("%lf\n", weight);
//	return 0;
//}


//局部变量全局变量
//int a = 100;//全局变量 -- {}外部定义的
//int main()
//{
//	//局部变量 -- {}内部定义的
//	//当局部变量和全局变量名字冲突的情况下，局部优先
//	//不建议把全局变量和局部变量的名字写成一样的
//	int a = 10;
//	printf("%d\n", a);
//	return 0;
//}


//例:写一个代码求两个整数的和
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	scanf("%d%d", &a, &b);
//	sum = a + b;
//	printf("sum = %d\n", sum);
//	return 0;
//}


//变量的作用域和生命周期
//局部变量的作用域：就是变量所在的局部范围
//全局变量的作用域：整个工程
//int g_val = 2023;//全局变量
//int main()
//{
//	int a = 10;
//	printf("%d\n", a);
//	printf("%d\n", g_val);
//	return 0;
//}
//变量的生命周期指的是变量的创建和销毁之间的时间段
//局部变量的生命周期：进入局部范围生命周期开始，出局部范围生命周期结束
//全局变量的生命周期：程序的生命周期



//常量
//#define MAX 10000
//enum Sex {
//	//这种枚举类型的变量的未来可能取值
//	//枚举常量
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	//1.字面常量
//	3.14;
//	10;
//	'a';
//	"abcdef";
//
//	//2.const修饰的变量
//	const int num = 10;//常变量 - 具有常属性（不能被改变的属性）
//	num = 20;//err
//
//	//3.#define定义的标识符常量
//	int n = MAX;
//	printf("%d\n", MAX);
//
//	//4.枚举常量
//	//可以一一列举的常量（可以赋初值，但不能更改）
//	//默认从0开始
//	enum Sex s = MALE;
//	printf("%d\n", MALE);//0
//	printf("%d\n", FEMALE);//1
//	printf("%d\n", SECRET);//2
//
//
//	return 0;
//}




//四、字符串
//字符串就是一串字符 -- 用双引号括起来的一串字符
//int main()
//{
//	//字符数组 - 数组是一组相同类型的元素
//	//字符串在结尾的位置隐藏了一个\0字符
//	// \0是字符串的结束标志
//	char arr1[] = "abcdef"; //abcdef\0
//	char arr2[] = { 'a','b','c','d','e','f' }; //abcdef
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}


//求字符串长度
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", strlen(arr1));//计算长度时没有包括\0
//	printf("%d\n", strlen(arr2));//随机值
//	return 0;
//}


//求字符串所占内存空间
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", sizeof(arr1));//所占内存空间包括\0
//	printf("%d\n", sizeof(arr2));
//	return 0;
//}


//转义字符
//转变了它原来的意思
//int main()
//{
//	printf("c:\test\test.c\n");
//	printf("c:\\test\\test.c\n");
//	return 0;
//}


//int main()
//{
//	printf("%c\n", '\130');//八进制的130是十进制的88，X的ASCII码值为88
//	printf("%c\n", '\x30');//十六进制的30是十进制的30，0的SSCII码值为30
//	return 0;
//}


//练习题
//int main()
//{
//	printf("%d\n", strlen("c:\test\328\test.c"));
//	return 0;
//}


//注释：用来解释复杂代码的
//int main()
//{
//	int a = 10;//C++注释风格
//
//	/*
//	int b = 10;
//	*/
//	//C语言注释风格 - 不支持嵌套
//	return 0;
//}




//五、选择语句
//int main()
//{
//	int input = 0;
//	printf("加入比特:>\n");
//	printf("那要好好学习吗(1/0):>");
//	scanf("%d", &input);
//	if (input == 1) {
//		printf("好offer\n");
//	}
//	else {
//		printf("卖红薯\n");
//	}
//	return 0;
//}




//六、循环语句
//int main()
//{
//	int line = 0;
//	while (line < 30000) {
//		printf("写代码\n");
//		line++;
//	}
//	if (line == 30000) {
//		printf("好offer\n");
//	}
//	return 0;
//}




//七、函数
//int Add(int x, int y) {
//	return x + y;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//	int sum = Add(num1, num2);
//	printf("%d\n", sum);
//	return 0;
//}




//八、数组
//一组相同类型的元素的集合
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	char ch[5] = { 'a','b','c' };//不完全初始化，剩余的默认为0
//	int i = 0;
//	while (i < 10) {
//		printf("%d ", arr[i]);
//		i++;
//	}
//	return 0;
//}




//九、操作符
//算术操作符：+  -  *  /
//移位操作符：>>  <<
//位操作符：& | ^ (与、或、异或)
//赋值操作符：=  +=  -+  *=  /=  &=  ^=  |=  >>=  <=
//单目操作符：！ -  +  &  sizeof  ~  --  ++  *  (类型)
//注：sizeof是操作符，不是函数
//int main()
//{
//	int a = 2;
//	int b = a << 1;//左移操作符 -- 移动的是二进制位
//	//a - 2
//	//00000000000000000000000000000010
//	//00000000000000000000000000000100
//	//b - 4
//	printf("%d\n", b);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	printf("%d\n", ~a);//按位取反：把所有二进制位中的数字，1变成0，0变成1
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111(原码)
//	//10000000000000000000000000000000(反码)
//	//10000000000000000000000000000001(补码) --- -1
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = ++a;//前置++，先++后使用
//	printf("%d\n", b);//11
//	printf("%d\n", a);//11
//
//	int c = 10;
//	int d = c++;//后置++，先使用后++
//	printf("%d\n", d);//10
//	printf("%d\n", c);//11
//	return 0;
//}


//int main()
//{
//	//强制类型转换
//	int a = (int)3.14;
//	printf("%d\n", a);
//	return 0;
//}


//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a && b;
//	printf("%d\n", c);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 3;
//	int max = a > b ? a : b;
//	printf("%d\n", max);
//	return 0;
//}


//十、常见关键字
//C语言提供的关键字
//1.C语言提供的，不能自己创建关键字
//2.变量名不能是关键字
//注：define、include不是关键字，是预处理指令
//int main()
//{
//	{
//		int a = 10;//自动创建，自动销毁的 - 自动变量
//		//auto省略掉了
//		//auto 新的C语言语言中也有其他用法 - 暂时不考虑
//	}
//	return 0;
//}


//int main()
//{
//	//大量频繁被使用的数据，想放在寄存器中，提升效率
//	register int num = 100;//建议num的值存放在寄存器中
//	return 0;
//}


//typedef - 类型重定义
//typedef unsigned int u_int;
//int main()
//{
//	u_int num = 100;
//	return 0;
//}


//static - 静态的
//1.static修饰局部变量，改变了局部变量的生命周期(本质上是改变了变量的存储类型)
//2.static修饰全局变量，使得这个全局变量只能在自己所在的源文件(.c)内部可以使用，其他源文件不能使用
//3.static修饰函数，static是将函数的外部链接属性变成了内部链接，使得函数只能在自己所在的源文件内部使用
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}


//#define定义常量和宏
//define是一个预处理指令
//1.define定义符号
//#define MAX 100
//int main()
//{
//	printf("%d\n", MAX);
//	return 0;
//}


//2.define定义宏
//#define Add(x,y) x+y
//int main()
//{
//	printf("%d\n", 4 * Add(2, 3));//宏是直接替换
//	return 0;
//}




//十一、指针
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;// * 解引用操作符,*pa就是通过pa里面的地址找到a
//	printf("%d\n", a);
//	return 0;
//}


//指针变量的大小
//指针的大小是相同的
//指针是用来存放地址的
//指针需要多大空间取决于地址的存储需要多大空间
//32位平台 -- 4byte
//64位平台 -- 8byte
//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//	return 0;
//}




//十二、结构体
//结构体使得C语言有能力描述复杂类型
//结构体可以让C语言创建新的类型出来

//创建一个学生
struct Stu {
	char name[20];
	int age;
	double socre;
};
//创建一个书的类型
struct Book {
	char name[20];//成员变量
	float price;
	char id[30];
};
int main()
{
	struct Stu s = { "zhangsan",20,85.5 };//结构体的创建和初始化
	printf("%s %d %lf\n", s.name, s.age, s.socre);//结构体变量.成员变量
	struct Stu* ps = &s;
	printf("%s %d %lf\n", (*ps).name, (*ps).age, (*ps).socre);//写法1
	printf("%s %d %lf\n", ps->name, ps->age, ps->socre);//写法2
	return 0;
}