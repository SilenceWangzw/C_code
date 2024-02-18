#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<Windows.h>
#include<stdlib.h>
#include<time.h>
//C语言是结构化的程序设计语言：顺序结构、选择结构、循环结构
//分支语句：if switch
//循环语句：while、for、do while

//一、分支语句
//1.if语句
//int main()
//{
//	int age = 10;
//	if (age >= 18) {
//		printf("成年\n");
//	}
//	else {
//		printf("未成年\n");
//	}
//	return 0;
//}


//int main()
//{
//	int age = 60;
//	if (age < 18) {
//		printf("少年\n");
//	}
//	else if (age >= 18 && age < 26) {
//		printf("青年\n");
//	}
//	else if (age >= 26 && age < 40) {
//		printf("中年\n");
//	}
//	else if (age >= 40 && age < 60) {
//		printf("壮年\n");
//	}
//	else if (age >= 60 && age < 100) {
//		printf("老年\n");
//	}
//	return 0;
//}


//练习1：判断一个数是否为奇数
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 != 0)
//	{
//		printf("%d是奇数\n", num);
//	}
//	else {
//		printf("%d不是奇数\n", num);
//	}
//	return 0;
//}


//练习2：输出1-100之间的奇数
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++) {
//		if (i % 2 != 0) {
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}


//switch语句
//case和break没有顺序要求

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day) {
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
//		printf("星期天\n");
//		break;
//	}
//	return 0;
//}


//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day) {
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//	return 0;
//}




//二.循环结构

//1.while循环
//int main()
//{
//	int i = 1;
//	while (i <= 10) {
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	while (i <= 10) {
//		if (i == 5) {
//			break;//在while循环中，break用于永久的终止循环
//		}
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	while (i <= 10) {
//		if (i == 5) {
//			continue;//在while循环中，continue的作用是跳过本次循环continue后边的代码，直接去判断部分，看是否进行下一次循环
//		}
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}


//EOF - end of file - 文件结束标志
//int main()
//{
//	int ch = getchar();
//	printf("%c\n", ch);
//	putchar(ch);//输出一个字符
//	return 0;
//}


//int main() {
//	int ch = 0;
//	//ctrl+z  -  getchar就读取结束
//	while ((ch = getchar()) != EOF) {
//		putchar(ch);
//	}
//	return 0;
//}




//2.for循环
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++) {
//		printf("%d ", i);
//	}
//	return 0;
//}


//break和continue在for循环中的应用
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++) {
//		if (i == 5) 
//		{
//			break;//直接跳出循环
//		}
//		printf("%d ", i);
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++) {
//		if (i == 5) {
//			continue; //continue后面的代码本次循环不执行
//		}
//		printf("%d ", i);
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++) //建议for循环尽量采用左闭右开写法
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	//判断部分的省略 - 判断部分恒为真 - 死循环
//	for (;;) 
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}


//不要随意省略
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 3; i++) {
//		for (; j < 3; j++) {
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}




//3.do while循环
//循环体至少执行一次，使用场景有限，所以不是经常使用

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


//int main()
//{
//	int i = 1;
//	do {
//		if (i == 5) {
//			break;
//		}
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	do {
//		if (i == 5) {
//			continue;
//		}
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}


//练习1：计算n的阶乘
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int sum = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++) {
//		sum = sum * i;
//	}
//	printf("%d的阶乘为%d\n", n, sum);
//	return 0;
//}


//练习2：计算1！+2！+....+10！
//写法1
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int sum = 1;
//	int ret = 0;
//	for (n = 1; n <= 10; n++) {
//		sum = 1;//计算n的阶乘之前，把sum初始为1，不然会把上一次循环的值乘进去
//		for (i = 1; i <= n; i++) {
//			sum = sum * i;
//		}
//		ret = ret + sum;
//	}
//	printf("%d\n", ret);
//	return 0;
//}


//写法2
//int main()
//{
//	int n = 0;
//	int sum = 0;
//	int ret = 1;
//	for (n = 1; n <= 3; n++) {
//		ret = ret * n;
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//练习3：在一个有序数组中查找具体的某个数字n
//二分查找
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//要查找的元素
//	//在arr这个有序的数组中查找k的值
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组的元素个数
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right) {
//		int mid = (left + right) / 2;
//		if (arr[mid] > k) {
//			right = mid - 1;
//		}
//		else if (arr[mid] < k) {
//			left = mid + 1;
//		}
//		else {
//			printf("找到了，下标为:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right) {
//		printf("找不到\n");
//	}
//
//	return 0;
//}


//练习4：编写代码，演示多个字符从两端移动，向中间汇聚
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!";
//	char arr2[] = "###################";
//	int sz = strlen(arr1);
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right) {
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//修眠
//		system("cls");//清空屏幕
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}


//练习5：编写的代码实现，模拟用户登录情景，并且只能登录三次
//int main()
//{
//	int i = 0;
//	//假设正确的密码是字符串"123456"
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++) {
//		printf("请输入密码:>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0) 
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else {
//			printf("密码错误，请重新输入！\n");
//		}
//	}
//	if (i == 3) {
//		printf("三次密码均错误，，退出程序\n");
//	}
//	return 0;
//}


//猜数字游戏
//1.自动产生一个1-100之间的随机数
//2.猜数字
//3.猜对了，就恭喜你，游戏结束
//	猜错了，会告诉你猜大了还是猜小了，直到猜对
//4.游戏可以一直玩，除非退出游戏
//void menu() {
//	printf("********************************\n");
//	printf("*****      1.play      *********\n");
//	printf("*****      0.exit      *********\n");
//	printf("********************************\n");
//}
////猜数字游戏的实现
//void game() {
//	//1.生成随机数
//	//rand函数返回了一个0-32767之间的数字
//	//时间-时间戳
//	int ret = rand() % 100 + 1; //%100的余数是0-99，然后+1，范围就是1-100
//
//	//2.猜数字
//	int guess = 0;
//	while (1) {
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess < ret) {
//			printf("猜小了\n");
//		}
//		else if (guess > ret) {
//			printf("猜大了\n");
//		}
//		else {
//			printf("恭喜猜对了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do {
//		menu();//打印菜单
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input) {
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误,重新选择\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}



//练习6
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		if (i = 5) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//练习7
//int main()
//{
//	int x = 3;
//	int y = 3;
//	switch (x % 2) {
//	case 1:
//		switch (y) {
//		case 0:
//			printf("first");
//		case 1:
//			printf("second");
//			break;
//		default:
//			printf("hello");
//		}
//	case 2:
//		printf("third");
//	}
//	return 0;
//}


//练习8:写代码将三个整数从大到小输出
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	//输入
//	scanf("%d%d%d", &a, &b, &c);
//
//	//调整顺序
//	if (a < b) {
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c) {
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c) {
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//
//	//输出 - 从大到小输出
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}


//练习9：写一个代码打印1-100之间所有3的倍数的数字
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++) {
//		if (i % 3 == 0) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//练习10：给定两个数，求这两个数的最大公约数
//写法1
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	//假设最大公约数就是m和n的较小值
//	int max = m > n ? n : m;
//	while (1) {
//		if (m % max == 0 && n % max == 0) {
//			printf("最大公约数就是:%d\n", max);
//			break;
//		}
//		max--;
//	}
//
//	return 0;
//}


//写法2 辗转相除法
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int t = 0;
//	while (m % n) {
//		t = m % n;
//		m = n;
//		n = t;
//	}
//	printf("最大公约数：%d\n", n);
//	//补充：最小公倍数 = m * n/最大公约数
//	return 0;
//}


//练习11:打印1000到2000年之间的闰年
//1.能被4整除不能被100整除是闰年
//2.能被400整除是闰年
//int main()
//{
//	int i = 1000;
//	for (i = 1000; i <= 2000; i++) {
//		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0) {
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}


//练习12：打印100-200之间的素数
//素数 - 质数
//只能被1和它本身整除
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++) {
//		//判断i是否为素数
//		//2 --- i-1之间的数字去试除i，看看能不能整除
//		int j = 0;
//		int flag = 1;//假设i是素数
//		for (j = 2; j < i; j++) {
//			if (i % j == 0) {
//				flag = 0;
//				break;
//			}
//		}
//		//所有的j都不能整除i
//		if (flag == 1) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//进一步优化：判断101是不是素数
//1.  2 --- 100之间的数字试除
//2.  2 --- sqrt(101)之间的数字去试除



//三、goto语句
//最常见的用法就是终止程序在某些深度嵌套的结构的处理过程，例如一次跳出两层或多层循环
//goto语句只能在一个函数范围内跳转，不能跨函数
//int main()
//{
//flag:
//	printf("hehe\n");
//	printf("haha\n");
//
//	goto flag;
//	return 0;
//}



//关机程序
//只要运行起来，电脑就在1分钟内关机，如果输入：取消关机，则取消

int main()
{
	//关机
	//C语言提供了一个函数：system() - 执行系统命令的
	char input[20] = { 0 };//存放输入的信息
	system("shutdown -s -t 60");
again:
	printf("请注意，你的电脑在一分钟内关机，如果输入：取消关机，则取消\n");
	scanf("%s", input);
	if (strcmp(input, "取消关机") == 0) {
		system("shutdown -a");
	}
	else {
		goto again;
	}
	return 0;
}