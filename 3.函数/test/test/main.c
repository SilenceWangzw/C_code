#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//������һ�����ͳ����е�ĳ���ִ��룬��һ�������������

//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello bit";
//	strcpy(arr1, arr2);//��arr2�����ݿ�����arr1����
//	printf("%s\n", arr1);
//	return 0;
//}


//memset - �ڴ�����
//int main()
//{
//	char arr[] = "hello bit";
//	memset(arr, 'x', 5); //��arr�����ǰ5���ֽ����ó�x
//	printf("%s\n", arr);
//	return 0;
//}


//дһ���������ҳ����������е����ֵ
//int Max(int x, int y) {
//	return x > y ? x : y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	//�����ĵ���
//	int ret = Max(a, b);
//
//	printf("%d\n", ret);
//	return 0;
//}


//дһ�����������������ͱ���
//�����������͵ĵط�д��void��ʾ��������������κ�ֵ
//ʵ�ο����ǣ����������������ʽ��������
//Swap1�ڱ����õ�ʱ��ʵ�δ����βΣ���ʵ�β���ʵ�ε�һ����ʱ����
//�ı��βΣ����ܸı�ʵ��
//void Swap1(int a, int b) //��ֵ����
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//void Swap2(int *a, int *b) //��ַ����
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("����ǰa=%d,b=%d\n", a, b);
//	Swap1(a, b); //ʵ�ʲ���---ʵ��
//	Swap2(&a, &b);
//	printf("������a=%d,b=%d\n", a, b);
//	return 0;
//}


//��ϰ1��дһ�������ж�һ�����ǲ�������
//int is_prime(int n) {
//	int j = 0;
//	//2 -> n-1֮��������Գ�
//	for (j = 2; j < n; j++) {
//		if (n % j == 0) {
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	//100-200֮�������
//	int i = 0;
//	for (i = 100; i <= 200; i++) {
//		//�ж�i�Ƿ�Ϊ����
//		if (is_prime(i) == 1) 
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//��ϰ2��дһ���������ж��ǲ�������,�����귵��1�����򷵻�0
//һ�����������д�������ͣ�Ĭ�Ϸ���int����
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


//��ϰ3��дһ��������ʵ����������Ķ��ֲ���
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
//	//�ҵ��˾ͷ����ҵ�λ�õ��±�
//	//�Ҳ�������-1
//	int ret = binary_search(arr, key, sz);
//	if (ret == -1) {
//		printf("�Ҳ���\n");
//	}
//	else {
//		printf("�ҵ��ˣ��±�Ϊ:%d ", ret);
//	}
//	return 0;
//}


//��ϰ4��дһ��������ÿ����һ������������ͻὫnum��ֵ��1
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


//������Ƕ�׵��ú���ʽ����(����Ƕ�׶���)
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
//	////��ʽ����
//	//printf("%d\n", strlen("abc"));
//
//	//char arr1[20] = { 0 };
//	//char arr2[] = "bit";
//	//printf("%s\n", strcpy(arr1, arr2));
//
//
//	//printf�������ص��Ǵ�ӡ����Ļ���ַ��ĸ���
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}



//�����Ķ���������
//����������һ�����ͷ�ļ���
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	//��������һ�� -- ��֪
//	int Add(int, int);
//
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}
//
////�����Ķ���
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



//�����ĵݹ�
//һ�����̻������䶨���˵������ֱ�ӻ��ӵ��������һ�ַ���
//��ͨ����һ�����͸��ӵ�������ת��Ϊһ����ԭ�������ƵĹ�ģ��С�����������
//������Ҫ������1.���������������������������������ʱ�򣬵ݹ�㲻�ټ���
//				2.ÿ�εݹ����֮��Խ��Խ�ӽ������������


//��ϰ1������һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ
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
//	//�ݹ�---�����Լ������Լ�
//	print(num);//print�������Դ�ӡ�����������ֵ�ÿһλ
//
//	return 0;
//}


//�ڴ��Ϊ��ջ������������̬��
//ջ�����ֲ������������β�
//��������̬�ڴ���䣨malloc/free\calloc,realloc��
//��̬����ȫ�ֱ�������̬����
//ÿ�ε��ö�����ջ���ڿ��ٿռ�,�ݹ����̫�࣬���ջ���
//д�ݹ�����ʱ��
//1.�������ݹ飬��������������ÿ�εݹ�Ҫ�ƽ���������
//2.�ݹ�Ĳ�β���̫��
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


//��ϰ2����д��������������ʱ���������ַ����ĳ���
//int my_strlen(char* str) {
//	if (*str != '\0') {
//		return 1 + my_strlen(str + 1);//����ʹ��++str�������ı�str
//	}
//	else {
//		return 0;
//	}
//}
//int main()
//{
//	char arr[] = "bit";
//	//ģ��ʵ��һ��strlen����
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}


//�ݹ������
//��ϰ3����n�Ľ׳�

//ѭ��(����)д��
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
//��һЩ���ܣ�����ʹ�õ����ķ�ʽʵ�֣�Ҳ����ʹ�õݹ�



//��ϰ4�����n��쳲�������
//�ݹ�д��----������⣬��Ч��̫��
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


//ѭ��д��
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


//��д������һ��1-100�����������г��ֶ��ٸ�����9
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



//����1/1-1/2+1/3+......-1/100
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


//��10�����������ֵ
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


//����Ļ������˷��ھ���
//int main()
//{
//	int i = 1;
//	int j = 1;
//	for (i = 1; i <= 9; i++) {
//		for (j = 1; j <= i; j++) {
//			printf("%d*%d=%-2d ", j, i, i * j);//2dռ��λ�Ҷ��룬-2dռ��λ�����
//		}
//		printf("\n");
//	}
//	return 0;
//}


//��ϰ1��ʵ��һ����������ӡ�˷��ھ������������Լ�ָ��
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



//��ϰ2���ַ�������
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


//��ϰ3��дһ������������һ���Ǹ����������������������֮��
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


//��ϰ4���ݹ�ʵ��n��k�η�(�Ǹ�)
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