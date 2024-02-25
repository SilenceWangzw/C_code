#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<errno.h>
#include<ctype.h>

//一、求字符串长度函数
//1.strlen
//字符串以'\0'作为结束标志，strlen函数返回的是在字符串中'\0'前面出现的字符个数，不包含\0
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = { 'a','b','c','d','e','f' };
//	int ret1 = strlen(arr1);
//	int ret2 = strlen(arr2);//随机值
//	printf("%d\n", ret1);
//	printf("%d\n", ret2);
//
//	return 0;
//}
//参数指向的字符串必须以'\0'结束
//注意函数的返回值size_t是无符号的
//int main()
//{
//	if (strlen("abc") - strlen("abcdef") > 0) //返回的是无符号整型
//	{
//		printf(">\n");
//	}
//	else 
//	{
//		printf("<\n");
//	}
//	return 0;
//}


//模拟实现strlen
//①：计数器方法
//int my_strlen(char* p)
//{
//	assert(p);
//	int count = 0;
//	while (*p != '\0') {
//		p++;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abc";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}


//②：指针-指针方法
//int my_strlen(char* p)
//{
//	assert(p);
//	int* start = p;
//	while (*p != '\0')
//	{
//		p++;
//	}
//	return p - start;
//}
//int main()
//{
//	char arr[] = "abc";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}




//二、长度不受限制的字符串函数
//1.strcpy -- 字符串拷贝
//int main()
//{
//	char name[20] = "xxxxxxxxxx";
//	strcpy(name, "zhangsan");	//strcpy(目标空间,源数据),源数据要有\0,连同\0一起拷贝到目标空间
//	printf("%s\n", name);
//	return 0;
//}
//源字符串必须以\0结束
//会将源字符串中的\0拷贝到目标空间
//目标空间必须足够大，以确保能存放源字符串
//目标空间必须可变
//int main()
//{
//	char* p = "abcdef";
//	char arr[] = "bit";
//	strcpy(p, arr);//目标空间必须可变
//	return 0;
//}


//模拟实现strcpy -- 返回的是目标空间的起始地址
//char* my_strcpy(char* p2, const char* p1)
//{
//	assert(p1 && p2);
//	char* start = p2;
//	while (*p1 != '\0')
//	{
//		*p2 = *p1;
//		p1++;
//		p2++;
//	}
//	*p2 = *p1;//将\0拷贝过去
//	return p2;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[20] = { 0 };
//	my_strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//
//	return 0;
//}


//2.strcat -- 字符串追加
//int main()
//{
//	char arr1[20] = "hello ";
//	strcat(arr1, "bit");
//	printf("%s\n", arr1);
//	return 0;
//}
//目标空间必须足够大
//目标空间必须可修改，以确保能存放源字符串
//源字符串必须以\0结尾


//模拟实现strcat
//char* my_strcat(char* p1, const char* p2)
//{
//	assert(p1 && p2);
//	char* start = *p1;
//	//找到目标字符串结尾的\0
//	while (*p1 != '\0')
//	{
//		p1++;
//	}
//	//拷贝
//	while (*p2 != '\0')
//	{
//		*p1 = *p2;
//		p1++;
//		p2++;
//	}
//	*p1 = *p2;
//	return start;
//}
//int main()
//{
//	char arr1[20] = "hello ";
//	my_strcat(arr1, "bit");
//	printf("%s\n", arr1);
//	return 0;
//}


//3.strcmp - 字符串比较
//如果第一个字符串小于第二个字符串，会返回一个小于0的数字
//如果第一个字符串等于第二个字符串，会返回0
//如果第一个字符串大于第二个字符串，会返回一个大于0的数字
//int main()
//{
//	char arr1[20] = "zhangsan";
//	char arr2[] = "zhangsanfeng";
//	int ret = strcmp(arr1, arr2);
//	if (ret < 0)
//	{
//		printf("<\n");
//	}
//	else if (ret == 0)
//	{
//		printf("==\n");
//	}
//	else {
//		printf(">\n");
//	}
//	return 0;
//}


//模拟实现strcmp
//int my_strcmp(const char* p1, const char* p2)
//{
//	assert(p1 && p2);
//	while (*p1 == *p2)
//	{
//		if (*p1 == '\0')
//		{
//			return 0;//相等
//		}
//		p1++;
//		p2++;
//	}
//	return (*p1 - *p2);//若1比2大，则返回大于0，若1比2小，则返回小于0
//}
//int main()
//{
//	char arr1[20] = "zhangsan";
//	char arr2[] = "zhangsanfeng";
//	int ret = my_strcmp(arr1, arr2);
//	if (ret < 0)
//	{
//		printf("<\n");
//	}
//	else if (ret == 0)
//	{
//		printf("==\n");
//	}
//	else {
//		printf(">\n");
//	}
//	return 0;
//}




//三、长度受限制的字符串函数 -- 更推荐使用
//1.strncpy
//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "hello bit";
//	strncpy(arr1, arr2, 5); //从arr2拷贝5个字节到arr1，若arr2长度不够，则用\0来补充
//	printf("%s\n", arr1);
//
//	return 0;
//}


//2.strncat
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "bit";
//	strncat(arr1, arr2, 2);//会自动追加一个\0，若arr2长度不够，不会追加\0
//	printf("%s\n", arr1);
//
//	return 0;
//}


//3.strncmp
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abc";
//	int ret = strncmp(arr1, arr2, 3);
//	if (ret == 0)
//	{
//		printf("==\n");
//	}
//	else if (ret < 0)
//	{
//		printf("<\n");
//	}
//	else {
//		printf(">\n");
//	}
//
//	return 0;




//四、字符串查找
//1.strstr -- 查找字串
//若找到了，会返回字串在串中的起始位置
//若找不到，返回的是NULL
//int main()
//{
//	char email[] = "wzw@bitejiuyeke.com";
//	char substr[] = "bitejiuyeke";
//	char* ret = strstr(email, substr);//找email中有没有substr这个字符串
//	if (ret == NULL)
//	{
//		printf("字串不存在\n");
//	}
//	else {
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}


//模拟实现strstr
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	const char* s1 = str1;
//	const char* s2 = str2;
//	const* p = str1;
//	while (*p)
//	{
//		s1 = p;//每次都从p开始匹配
//		s2 = str2;
//		while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return (char*)p;
//		}
//		p++;//匹配失败，从p的下一个位置再开始匹配
//	}
//}
//int main()
//{
//	char email[] = "wzw@bitejiuyeke.com";
//	char substr[] = "bitejiuyeke";
//	char* ret = my_strstr(email, substr);//找email中有没有substr这个字符串
//	if (ret == NULL)
//	{
//		printf("字串不存在\n");
//	}
//	else {
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}


//2.strtok -- 切割字符串
//char *strtok(char *str , const char *sep)
//sep参数是个字符串，定义了用作分隔符的字符集合
//第一个参数指定一个字符串，它包含了0个或多个由sep字符中一个或多个分割符分割的标记
//strtok函数找到str中的下一个标记，并改为\0，返回一个指向这个标记的指针
//int main()
//{
//	const char* sep = "@.";//分割符集合
//	char email[] = "wangzhiwei@bitejiuyeke.com";
//	char cp[30] = { 0 };
//	strcpy(cp, email);
//
//	char* ret = strtok(cp, sep);
//	printf("%s\n", ret);
//	ret = strtok(NULL, sep);
//	printf("%s\n", ret);
//	ret = strtok(NULL, sep);
//	printf("%s\n", ret);
//	return 0;
//}




//五、错误信息报告
//1.strerror -- 错误报告函数
//返回错误码，所对应的错误信息
//C语言的库函数，再执行失败的时候，都会设置错误码
//int main()
//{
//	printf("%s\n", strerror(0));
//	printf("%s\n", strerror(1));
//	printf("%s\n", strerror(2));
//	printf("%s\n", strerror(3));
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno)); //errno -- C语言设置的一个全局的错误码存放的变量
//		return 1;
//	}
//	return 0;
//}




//六、字符操作
//int main()
//{
//	int a = isspace('w'); //判断是不是空白字符
//	printf("%d\n", a);
//	return 0;
//}


//int main()
//{
//	int a = isdigit('x');//判断是不是数字
//	printf("%d\n", a);
//	return 0;
//}


//字符转换函数
//int main()
//{
//	printf("%c\n", tolower('W')); //大写转小写
//	printf("%c\n", toupper('a'));//小写转大写
//	return 0;
//}




//七、内存操作函数
//memory -- 记忆 -- 内存
//1.memcpy -- 内存拷贝 -- 拷贝两块独立空间中的数据
//void *memcpy(void *destiantion, const void *source, size_t num);
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7 };
//	int arr2[10] = { 0 };
//	memcpy(arr2, arr1, 28);//将内存中的arr1拷贝28个字节到arr2
//	for (int i = 0; i < 7; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}


//模拟实现memcpy
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7 };
//	int arr2[10] = { 0 };
//	my_memcpy(arr2, arr1, 28);//将内存中的arr1拷贝28个字节到arr2
//	for (int i = 0; i < 7; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}


//2.memmove -- 用来拷贝重叠内存
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	memmove(arr + 2, arr, 20);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//模拟实现memmove
//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	if (dest < src)
//	{
//		//前 --> 后
//		while (num--) {
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else {
//		//后 --> 前
//		while (num--)
//		{
//			*((char*)dest+num) = *((char*)src + num);
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memmove(arr, arr + 2, 20);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//3.memset -- 内存设置
//int main()
//{
//	char arr[] = "hello bit";
//	memset(arr, 'x', 5);
//	printf("%s\n", arr);
//	memset(arr + 6, 'x', 3);
//	printf("%s\n", arr);
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	memset(arr, 1, 40); // 每个字节都变成01,则一个整型变为01 01 01 01
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}


//4.memcmp -- 内存比较
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };//01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00 05 00 00 00
//	int arr2[] = { 1,3,2 };	   //01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00 05 00 00 00
//	int ret = memcmp(arr1, arr2, 12);//比较arr1和arr2的前12个字节
//	printf("%d\n", ret);
//	return 0;
//}