#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<errno.h>
#include<ctype.h>

//һ�����ַ������Ⱥ���
//1.strlen
//�ַ�����'\0'��Ϊ������־��strlen�������ص������ַ�����'\0'ǰ����ֵ��ַ�������������\0
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = { 'a','b','c','d','e','f' };
//	int ret1 = strlen(arr1);
//	int ret2 = strlen(arr2);//���ֵ
//	printf("%d\n", ret1);
//	printf("%d\n", ret2);
//
//	return 0;
//}
//����ָ����ַ���������'\0'����
//ע�⺯���ķ���ֵsize_t���޷��ŵ�
//int main()
//{
//	if (strlen("abc") - strlen("abcdef") > 0) //���ص����޷�������
//	{
//		printf(">\n");
//	}
//	else 
//	{
//		printf("<\n");
//	}
//	return 0;
//}


//ģ��ʵ��strlen
//�٣�����������
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


//�ڣ�ָ��-ָ�뷽��
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




//�������Ȳ������Ƶ��ַ�������
//1.strcpy -- �ַ�������
//int main()
//{
//	char name[20] = "xxxxxxxxxx";
//	strcpy(name, "zhangsan");	//strcpy(Ŀ��ռ�,Դ����),Դ����Ҫ��\0,��ͬ\0һ�𿽱���Ŀ��ռ�
//	printf("%s\n", name);
//	return 0;
//}
//Դ�ַ���������\0����
//�ὫԴ�ַ����е�\0������Ŀ��ռ�
//Ŀ��ռ�����㹻����ȷ���ܴ��Դ�ַ���
//Ŀ��ռ����ɱ�
//int main()
//{
//	char* p = "abcdef";
//	char arr[] = "bit";
//	strcpy(p, arr);//Ŀ��ռ����ɱ�
//	return 0;
//}


//ģ��ʵ��strcpy -- ���ص���Ŀ��ռ����ʼ��ַ
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
//	*p2 = *p1;//��\0������ȥ
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


//2.strcat -- �ַ���׷��
//int main()
//{
//	char arr1[20] = "hello ";
//	strcat(arr1, "bit");
//	printf("%s\n", arr1);
//	return 0;
//}
//Ŀ��ռ�����㹻��
//Ŀ��ռ������޸ģ���ȷ���ܴ��Դ�ַ���
//Դ�ַ���������\0��β


//ģ��ʵ��strcat
//char* my_strcat(char* p1, const char* p2)
//{
//	assert(p1 && p2);
//	char* start = *p1;
//	//�ҵ�Ŀ���ַ�����β��\0
//	while (*p1 != '\0')
//	{
//		p1++;
//	}
//	//����
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


//3.strcmp - �ַ����Ƚ�
//�����һ���ַ���С�ڵڶ����ַ������᷵��һ��С��0������
//�����һ���ַ������ڵڶ����ַ������᷵��0
//�����һ���ַ������ڵڶ����ַ������᷵��һ������0������
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


//ģ��ʵ��strcmp
//int my_strcmp(const char* p1, const char* p2)
//{
//	assert(p1 && p2);
//	while (*p1 == *p2)
//	{
//		if (*p1 == '\0')
//		{
//			return 0;//���
//		}
//		p1++;
//		p2++;
//	}
//	return (*p1 - *p2);//��1��2���򷵻ش���0����1��2С���򷵻�С��0
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




//�������������Ƶ��ַ������� -- ���Ƽ�ʹ��
//1.strncpy
//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "hello bit";
//	strncpy(arr1, arr2, 5); //��arr2����5���ֽڵ�arr1����arr2���Ȳ���������\0������
//	printf("%s\n", arr1);
//
//	return 0;
//}


//2.strncat
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "bit";
//	strncat(arr1, arr2, 2);//���Զ�׷��һ��\0����arr2���Ȳ���������׷��\0
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




//�ġ��ַ�������
//1.strstr -- �����ִ�
//���ҵ��ˣ��᷵���ִ��ڴ��е���ʼλ��
//���Ҳ��������ص���NULL
//int main()
//{
//	char email[] = "wzw@bitejiuyeke.com";
//	char substr[] = "bitejiuyeke";
//	char* ret = strstr(email, substr);//��email����û��substr����ַ���
//	if (ret == NULL)
//	{
//		printf("�ִ�������\n");
//	}
//	else {
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}


//ģ��ʵ��strstr
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	const char* s1 = str1;
//	const char* s2 = str2;
//	const* p = str1;
//	while (*p)
//	{
//		s1 = p;//ÿ�ζ���p��ʼƥ��
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
//		p++;//ƥ��ʧ�ܣ���p����һ��λ���ٿ�ʼƥ��
//	}
//}
//int main()
//{
//	char email[] = "wzw@bitejiuyeke.com";
//	char substr[] = "bitejiuyeke";
//	char* ret = my_strstr(email, substr);//��email����û��substr����ַ���
//	if (ret == NULL)
//	{
//		printf("�ִ�������\n");
//	}
//	else {
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}


//2.strtok -- �и��ַ���
//char *strtok(char *str , const char *sep)
//sep�����Ǹ��ַ����������������ָ������ַ�����
//��һ������ָ��һ���ַ�������������0��������sep�ַ���һ�������ָ���ָ�ı��
//strtok�����ҵ�str�е���һ����ǣ�����Ϊ\0������һ��ָ�������ǵ�ָ��
//int main()
//{
//	const char* sep = "@.";//�ָ������
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




//�塢������Ϣ����
//1.strerror -- ���󱨸溯��
//���ش����룬����Ӧ�Ĵ�����Ϣ
//C���ԵĿ⺯������ִ��ʧ�ܵ�ʱ�򣬶������ô�����
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
//		printf("%s\n", strerror(errno)); //errno -- C�������õ�һ��ȫ�ֵĴ������ŵı���
//		return 1;
//	}
//	return 0;
//}




//�����ַ�����
//int main()
//{
//	int a = isspace('w'); //�ж��ǲ��ǿհ��ַ�
//	printf("%d\n", a);
//	return 0;
//}


//int main()
//{
//	int a = isdigit('x');//�ж��ǲ�������
//	printf("%d\n", a);
//	return 0;
//}


//�ַ�ת������
//int main()
//{
//	printf("%c\n", tolower('W')); //��дתСд
//	printf("%c\n", toupper('a'));//Сдת��д
//	return 0;
//}




//�ߡ��ڴ��������
//memory -- ���� -- �ڴ�
//1.memcpy -- �ڴ濽�� -- ������������ռ��е�����
//void *memcpy(void *destiantion, const void *source, size_t num);
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7 };
//	int arr2[10] = { 0 };
//	memcpy(arr2, arr1, 28);//���ڴ��е�arr1����28���ֽڵ�arr2
//	for (int i = 0; i < 7; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}


//ģ��ʵ��memcpy
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
//	my_memcpy(arr2, arr1, 28);//���ڴ��е�arr1����28���ֽڵ�arr2
//	for (int i = 0; i < 7; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}


//2.memmove -- ���������ص��ڴ�
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


//ģ��ʵ��memmove
//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	if (dest < src)
//	{
//		//ǰ --> ��
//		while (num--) {
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else {
//		//�� --> ǰ
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


//3.memset -- �ڴ�����
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
//	memset(arr, 1, 40); // ÿ���ֽڶ����01,��һ�����ͱ�Ϊ01 01 01 01
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}


//4.memcmp -- �ڴ�Ƚ�
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };//01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00 05 00 00 00
//	int arr2[] = { 1,3,2 };	   //01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00 05 00 00 00
//	int ret = memcmp(arr1, arr2, 12);//�Ƚ�arr1��arr2��ǰ12���ֽ�
//	printf("%d\n", ret);
//	return 0;
//}