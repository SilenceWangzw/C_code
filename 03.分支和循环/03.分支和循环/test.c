#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//C语言是一门结构化语言，结构指的是顺序结构、选择结构、循环结构
//一、if语句
//int main()
//{
//	int num = 10;
//	if (num)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}


//例：输入一个整数，判断是否为奇数
//int main()
//{
//	int num = 0;
//	//输入
//	scanf("%d", &num);
//	//判断和输出
//	if (num % 2 != 0)
//	{
//		printf("%d是奇数\n", num);
//	}
//	else
//	{
//		printf("%d是偶数\n", num);
//	}
//	return 0;
//}


//例：输入一个年龄，判断是否成年
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age >= 18)
//	{
//		printf("成年\n");
//	}
//	else
//	{
//		printf("未成年\n");
//	}
//	return 0;
//}


//嵌套if
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num == 0)
//	{
//		printf("输入的值是0\n");
//	}
//	else
//	{
//		if (num > 0)
//		{
//			printf("输入的值是正数\n");
//		}
//		else {
//			printf("输入的值是负数\n");
//		}
//		
//	}
//	return 0;
//}


//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("少年\n");
//	}
//	else if (age >= 18 && age <= 44)
//	{
//		printf("青年\n");
//	}
//	else if (age >= 45 && age <= 59)
//	{
//		printf("中老年\n");
//	}
//	else if (age >= 60 && age <= 89)
//	{
//		printf("老年\n");
//	}
//	else if (age >= 90)
//	{
//		printf("老寿星\n");
//	}
//	return 0;
//}




//二、关系操作符
//C语言用于比较的表达式，称为关系表达式，里面使用的运算符就称为关系运算符
// >  <  >=  <=  ==  !=
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	if (a > b)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}


//注意区别 == 和 =
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	if (a == b)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}


//关系表达式的返回值是1或0
//int main()
//{
//	int a = (3 == 5);
//	printf("%d\n", a);
//	return 0;
//}


//int main()
//{
//	//当一个变量和一个常量比较相等的时候，应该怎么写呢？
//	//建议将常量放在==的左边，为了防止把==写成=出错
//	int a = 4;
//	if (5 == a)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}


//多个关系符不宜连用
//int main()
//{
//	int a = 3;
//	int b = 7;
//	int c = 4;
//	//错误写法
//	if (a < b < c)
//	{
//		printf("hehe\n");
//	}
//
//	//正确写法
//	if (a < b && b < c)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}


//例：输入一个年龄，如果年龄在18~36岁之间，输出青年
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age >= 18 && age <= 36)
//	{
//		printf("青年\n");
//	}
//	return 0;
//}




//三、条件操作符
//条件操作符也叫三目操作符
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d", &a);
//	
//	b = a > 5 ? 3 : -3;
//	printf("%d\n", b);
//
//	return 0;
//}


//例：使用条件表达式实现找两个数中较大值
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int max = a > b ? a : b;
//	printf("max = %d\n", max);
//	return 0;
//}




//四、逻辑操作符
// &&  ||  !
//int main()
//{
//	int flag = 0;
//	scanf("%d", &flag);
//	if (!flag)//flag为假要做什么事
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}


//例：3~5月是春天
//int main()
//{
//	int month = 0;
//	scanf("%d", &month);
//	if (month >= 3 && month <= 5)
//	{
//		printf("春天\n");
//	}
//	return 0;
//}


//int main()
//{
//	int month = 0;
//	scanf("%d", &month);
//	if (month == 12 || month == 1 || month == 2)
//	{
//		printf("冬季\n");
//	}
//
//	return 0;
//}


//练习：闰年的判断
//规则：能被4整除并且不能被100整除是闰年
//		能被400整除是闰年
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//	{
//		printf("%d年是闰年\n", year);
//	}
//	return 0;
//}


//短路：如果左边的表达式满足运算符的条件，就不再对右边的表达式求值，这种情况称为短路
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;
//	i = a++||++b||d++;
//	printf("i = %d\na = %d\nb = %d\nc = %d\nd = %d\n", i, a, b, c, d);
//	return 0;
//}




//五、switch语句
//输入任意一个整数值，计算除3之后的余数
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	switch (n % 3)
//	{
//	case 0:
//		printf("余数是0\n");
//		break;
//	case 1:
//		printf("余数是1\n");
//		break;
//	case 2:
//		printf("余数是2\n");
//		break;
//	}
//	return 0;
//}
//注:switch后的表达式必须是整型表达式
//	 case后必须是整型常量表达式


//也可以使用char类型，因为字符型也是归类到整型家族，字符本质是ASCII码值，这个值是整数
//int main()
//{
//	char ch = 0;
//	scanf("%c", &ch);
//	switch (ch)
//	{
//	case 'a':
//		break;
//	case 'b':
//		break;
//	}
//	return 0;
//}


//练习：输入1~7的数字，打印对应的星期几
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期日\n");
//		break;
//	}
//	return 0;
//}


//如果需求发生变化：1~5输出工作日，6~7输出休息日
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("输入错误，输入的值应该在1~7的范围\n");
//		break;
//	}
//	return 0;
//}




//六、while循环
//int main()
//{
//	int n = 10;
//	while (n > 0)
//	{
//		printf("hehe\n");//死循环
//	}
//
//	return 0;
//}


//练习：在屏幕上打印1~10
//int main()
//{
//	int i = 1;//循环变量
//	while (i <= 10)
//	{
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}


//练习:输入一个正整数，逆序打印这个数的每一位
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	while (n)
//	{
//		printf("%d ", n % 10);
//		n = n / 10;
//	}
//	return 0;
//}




//七、for循环
//int main()
//{
//	for (int i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}


//练习：计算1~100之间3的倍数的数字之和
//int main()
//{
//	int sum = 0;
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			sum = sum + i;
//		}
//	}
//	printf("%d\n", sum);
//	return 0;
//}




//八、do-while循环
//do while的循环体至少执行一次
//int main()
//{
//	int i = 1;
//	do {
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}


//练习：输入一个正整数，计算一下这个整数是几位数
//int main()
//{
//	int n = 0;
//	int count = 0;
//	scanf("%d", &n);
//	do {
//		count++;
//		n = n / 10;
//	} while (n);
//
//	printf("%d\n", count);
//	return 0;
//}




//九、break和continue
//break的作用是用于永久的终止循环
//continu的作用是跳过本次循环中continue后面的代码
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//		{
//			break;
//		}
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//		{
//			continue;
//		}
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//		{
//			break;
//		}
//		printf("%d ", i);
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//		{
//			continue;
//		}
//		printf("%d ", i);
//	}
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//		{
//			break;
//		}
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//		{
//			continue;
//		}
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}