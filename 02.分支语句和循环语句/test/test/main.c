#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<Windows.h>
#include<stdlib.h>
#include<time.h>
//C�����ǽṹ���ĳ���������ԣ�˳��ṹ��ѡ��ṹ��ѭ���ṹ
//��֧��䣺if switch
//ѭ����䣺while��for��do while

//һ����֧���
//1.if���
//int main()
//{
//	int age = 10;
//	if (age >= 18) {
//		printf("����\n");
//	}
//	else {
//		printf("δ����\n");
//	}
//	return 0;
//}


//int main()
//{
//	int age = 60;
//	if (age < 18) {
//		printf("����\n");
//	}
//	else if (age >= 18 && age < 26) {
//		printf("����\n");
//	}
//	else if (age >= 26 && age < 40) {
//		printf("����\n");
//	}
//	else if (age >= 40 && age < 60) {
//		printf("׳��\n");
//	}
//	else if (age >= 60 && age < 100) {
//		printf("����\n");
//	}
//	return 0;
//}


//��ϰ1���ж�һ�����Ƿ�Ϊ����
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 != 0)
//	{
//		printf("%d������\n", num);
//	}
//	else {
//		printf("%d��������\n", num);
//	}
//	return 0;
//}


//��ϰ2�����1-100֮�������
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


//switch���
//case��breakû��˳��Ҫ��

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day) {
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
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
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	default:
//		printf("�������\n");
//		break;
//	}
//	return 0;
//}




//��.ѭ���ṹ

//1.whileѭ��
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
//			break;//��whileѭ���У�break�������õ���ֹѭ��
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
//			continue;//��whileѭ���У�continue����������������ѭ��continue��ߵĴ��룬ֱ��ȥ�жϲ��֣����Ƿ������һ��ѭ��
//		}
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}


//EOF - end of file - �ļ�������־
//int main()
//{
//	int ch = getchar();
//	printf("%c\n", ch);
//	putchar(ch);//���һ���ַ�
//	return 0;
//}


//int main() {
//	int ch = 0;
//	//ctrl+z  -  getchar�Ͷ�ȡ����
//	while ((ch = getchar()) != EOF) {
//		putchar(ch);
//	}
//	return 0;
//}




//2.forѭ��
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++) {
//		printf("%d ", i);
//	}
//	return 0;
//}


//break��continue��forѭ���е�Ӧ��
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++) {
//		if (i == 5) 
//		{
//			break;//ֱ������ѭ��
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
//			continue; //continue����Ĵ��뱾��ѭ����ִ��
//		}
//		printf("%d ", i);
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++) //����forѭ��������������ҿ�д��
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	//�жϲ��ֵ�ʡ�� - �жϲ��ֺ�Ϊ�� - ��ѭ��
//	for (;;) 
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}


//��Ҫ����ʡ��
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




//3.do whileѭ��
//ѭ��������ִ��һ�Σ�ʹ�ó������ޣ����Բ��Ǿ���ʹ��

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


//��ϰ1������n�Ľ׳�
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int sum = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++) {
//		sum = sum * i;
//	}
//	printf("%d�Ľ׳�Ϊ%d\n", n, sum);
//	return 0;
//}


//��ϰ2������1��+2��+....+10��
//д��1
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int sum = 1;
//	int ret = 0;
//	for (n = 1; n <= 10; n++) {
//		sum = 1;//����n�Ľ׳�֮ǰ����sum��ʼΪ1����Ȼ�����һ��ѭ����ֵ�˽�ȥ
//		for (i = 1; i <= n; i++) {
//			sum = sum * i;
//		}
//		ret = ret + sum;
//	}
//	printf("%d\n", ret);
//	return 0;
//}


//д��2
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


//��ϰ3����һ�����������в��Ҿ����ĳ������n
//���ֲ���
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//Ҫ���ҵ�Ԫ��
//	//��arr�������������в���k��ֵ
//	int sz = sizeof(arr) / sizeof(arr[0]);//���������Ԫ�ظ���
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
//			printf("�ҵ��ˣ��±�Ϊ:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right) {
//		printf("�Ҳ���\n");
//	}
//
//	return 0;
//}


//��ϰ4����д���룬��ʾ����ַ��������ƶ������м���
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
//		Sleep(1000);//����
//		system("cls");//�����Ļ
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}


//��ϰ5����д�Ĵ���ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼����
//int main()
//{
//	int i = 0;
//	//������ȷ���������ַ���"123456"
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++) {
//		printf("����������:>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0) 
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else {
//			printf("����������������룡\n");
//		}
//	}
//	if (i == 3) {
//		printf("������������󣬣��˳�����\n");
//	}
//	return 0;
//}


//��������Ϸ
//1.�Զ�����һ��1-100֮��������
//2.������
//3.�¶��ˣ��͹�ϲ�㣬��Ϸ����
//	�´��ˣ��������´��˻��ǲ�С�ˣ�ֱ���¶�
//4.��Ϸ����һֱ�棬�����˳���Ϸ
//void menu() {
//	printf("********************************\n");
//	printf("*****      1.play      *********\n");
//	printf("*****      0.exit      *********\n");
//	printf("********************************\n");
//}
////��������Ϸ��ʵ��
//void game() {
//	//1.���������
//	//rand����������һ��0-32767֮�������
//	//ʱ��-ʱ���
//	int ret = rand() % 100 + 1; //%100��������0-99��Ȼ��+1����Χ����1-100
//
//	//2.������
//	int guess = 0;
//	while (1) {
//		printf("�������:>");
//		scanf("%d", &guess);
//		if (guess < ret) {
//			printf("��С��\n");
//		}
//		else if (guess > ret) {
//			printf("�´���\n");
//		}
//		else {
//			printf("��ϲ�¶���\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do {
//		menu();//��ӡ�˵�
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input) {
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����,����ѡ��\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}



//��ϰ6
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


//��ϰ7
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


//��ϰ8:д���뽫���������Ӵ�С���
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	//����
//	scanf("%d%d%d", &a, &b, &c);
//
//	//����˳��
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
//	//��� - �Ӵ�С���
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}


//��ϰ9��дһ�������ӡ1-100֮������3�ı���������
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


//��ϰ10�����������������������������Լ��
//д��1
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	//�������Լ������m��n�Ľ�Сֵ
//	int max = m > n ? n : m;
//	while (1) {
//		if (m % max == 0 && n % max == 0) {
//			printf("���Լ������:%d\n", max);
//			break;
//		}
//		max--;
//	}
//
//	return 0;
//}


//д��2 շת�����
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
//	printf("���Լ����%d\n", n);
//	//���䣺��С������ = m * n/���Լ��
//	return 0;
//}


//��ϰ11:��ӡ1000��2000��֮�������
//1.�ܱ�4�������ܱ�100����������
//2.�ܱ�400����������
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


//��ϰ12����ӡ100-200֮�������
//���� - ����
//ֻ�ܱ�1������������
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++) {
//		//�ж�i�Ƿ�Ϊ����
//		//2 --- i-1֮�������ȥ�Գ�i�������ܲ�������
//		int j = 0;
//		int flag = 1;//����i������
//		for (j = 2; j < i; j++) {
//			if (i % j == 0) {
//				flag = 0;
//				break;
//			}
//		}
//		//���е�j����������i
//		if (flag == 1) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//��һ���Ż����ж�101�ǲ�������
//1.  2 --- 100֮��������Գ�
//2.  2 --- sqrt(101)֮�������ȥ�Գ�



//����goto���
//������÷�������ֹ������ĳЩ���Ƕ�׵Ľṹ�Ĵ�����̣�����һ�������������ѭ��
//goto���ֻ����һ��������Χ����ת�����ܿ纯��
//int main()
//{
//flag:
//	printf("hehe\n");
//	printf("haha\n");
//
//	goto flag;
//	return 0;
//}



//�ػ�����
//ֻҪ�������������Ծ���1�����ڹػ���������룺ȡ���ػ�����ȡ��

int main()
{
	//�ػ�
	//C�����ṩ��һ��������system() - ִ��ϵͳ�����
	char input[20] = { 0 };//����������Ϣ
	system("shutdown -s -t 60");
again:
	printf("��ע�⣬��ĵ�����һ�����ڹػ���������룺ȡ���ػ�����ȡ��\n");
	scanf("%s", input);
	if (strcmp(input, "ȡ���ػ�") == 0) {
		system("shutdown -a");
	}
	else {
		goto again;
	}
	return 0;
}