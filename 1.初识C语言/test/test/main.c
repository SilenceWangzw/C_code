#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//һ����һ������
//1.д��������(main����) --- C�����Ǵ��������ĵ�һ�п�ʼִ�е�
//д����������Ļ�ϴ�ӡ������
//printf -- �⺯�� -- ����Ļ�ϴ�ӡ��Ϣ��
//printf��ʹ�ã�����ͷ�ļ� stdio.h
//int main()
//{
//	printf("����\n");
//	return 0;
//}
//����+����+���д���



//������������
//��������� - д���� - ��������е�����
//���������������������е�����
//�����̳� - �ϼ���Ʒ���۸� - 15.6Ԫ - С��
//���� - 50 - ����
//int main()
//{
//	//�ַ�����
//	char ch = 'a';
//	//����
//	int age = 20;
//	//������
//	short num = 10;
//	//������(�����ȸ�����)
//	float = weight = 55.5;
//	//������(˫���ȸ�����)
//	double d = 0.0;
//	return 0;
//}


//ÿ�����͵Ĵ�С�Ƕ���
//int main()
//{
//	//sizeof() -- �ؼ��� -- ������ -- �������ͻ��߱�����ռ�ռ��С
//	printf("char size is %d\n", sizeof(char));//1bite
//	printf("short size is %d\n", sizeof(short));//2bite
//	printf("int size is %d\n", sizeof(int));//4bite
//	printf("long size is %d\n", sizeof(long));//4bite
//	printf("long long size is %d\n", sizeof(long long));//8bite
//	printf("float size is %d\n", sizeof(float));//4bite
//	printf("double size is %d\n", sizeof(double));//8bite
//	return 0;
//}



//������������
//��������Щ���ݲ��ܱ䣺Ѫ�͡��Ա�Բ����
//��Щ����һ���ɱ䣺���ʡ����䡢����
//C�������� -- ���������ܸı������ -- �������ܱ��ı������
//int main()
//{
	//����һ������
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


//�ֲ�����ȫ�ֱ���
//int a = 100;//ȫ�ֱ��� -- {}�ⲿ�����
//int main()
//{
//	//�ֲ����� -- {}�ڲ������
//	//���ֲ�������ȫ�ֱ������ֳ�ͻ������£��ֲ�����
//	//�������ȫ�ֱ����;ֲ�����������д��һ����
//	int a = 10;
//	printf("%d\n", a);
//	return 0;
//}


//��:дһ�����������������ĺ�
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


//���������������������
//�ֲ������������򣺾��Ǳ������ڵľֲ���Χ
//ȫ�ֱ�������������������
//int g_val = 2023;//ȫ�ֱ���
//int main()
//{
//	int a = 10;
//	printf("%d\n", a);
//	printf("%d\n", g_val);
//	return 0;
//}
//��������������ָ���Ǳ����Ĵ���������֮���ʱ���
//�ֲ��������������ڣ�����ֲ���Χ�������ڿ�ʼ�����ֲ���Χ�������ڽ���
//ȫ�ֱ������������ڣ��������������



//����
//#define MAX 10000
//enum Sex {
//	//����ö�����͵ı�����δ������ȡֵ
//	//ö�ٳ���
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	//1.���泣��
//	3.14;
//	10;
//	'a';
//	"abcdef";
//
//	//2.const���εı���
//	const int num = 10;//������ - ���г����ԣ����ܱ��ı�����ԣ�
//	num = 20;//err
//
//	//3.#define����ı�ʶ������
//	int n = MAX;
//	printf("%d\n", MAX);
//
//	//4.ö�ٳ���
//	//����һһ�оٵĳ��������Ը���ֵ�������ܸ��ģ�
//	//Ĭ�ϴ�0��ʼ
//	enum Sex s = MALE;
//	printf("%d\n", MALE);//0
//	printf("%d\n", FEMALE);//1
//	printf("%d\n", SECRET);//2
//
//
//	return 0;
//}




//�ġ��ַ���
//�ַ�������һ���ַ� -- ��˫������������һ���ַ�
//int main()
//{
//	//�ַ����� - ������һ����ͬ���͵�Ԫ��
//	//�ַ����ڽ�β��λ��������һ��\0�ַ�
//	// \0���ַ����Ľ�����־
//	char arr1[] = "abcdef"; //abcdef\0
//	char arr2[] = { 'a','b','c','d','e','f' }; //abcdef
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}


//���ַ�������
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", strlen(arr1));//���㳤��ʱû�а���\0
//	printf("%d\n", strlen(arr2));//���ֵ
//	return 0;
//}


//���ַ�����ռ�ڴ�ռ�
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", sizeof(arr1));//��ռ�ڴ�ռ����\0
//	printf("%d\n", sizeof(arr2));
//	return 0;
//}


//ת���ַ�
//ת������ԭ������˼
//int main()
//{
//	printf("c:\test\test.c\n");
//	printf("c:\\test\\test.c\n");
//	return 0;
//}


//int main()
//{
//	printf("%c\n", '\130');//�˽��Ƶ�130��ʮ���Ƶ�88��X��ASCII��ֵΪ88
//	printf("%c\n", '\x30');//ʮ�����Ƶ�30��ʮ���Ƶ�30��0��SSCII��ֵΪ30
//	return 0;
//}


//��ϰ��
//int main()
//{
//	printf("%d\n", strlen("c:\test\328\test.c"));
//	return 0;
//}


//ע�ͣ��������͸��Ӵ����
//int main()
//{
//	int a = 10;//C++ע�ͷ��
//
//	/*
//	int b = 10;
//	*/
//	//C����ע�ͷ�� - ��֧��Ƕ��
//	return 0;
//}




//�塢ѡ�����
//int main()
//{
//	int input = 0;
//	printf("�������:>\n");
//	printf("��Ҫ�ú�ѧϰ��(1/0):>");
//	scanf("%d", &input);
//	if (input == 1) {
//		printf("��offer\n");
//	}
//	else {
//		printf("������\n");
//	}
//	return 0;
//}




//����ѭ�����
//int main()
//{
//	int line = 0;
//	while (line < 30000) {
//		printf("д����\n");
//		line++;
//	}
//	if (line == 30000) {
//		printf("��offer\n");
//	}
//	return 0;
//}




//�ߡ�����
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




//�ˡ�����
//һ����ͬ���͵�Ԫ�صļ���
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	char ch[5] = { 'a','b','c' };//����ȫ��ʼ����ʣ���Ĭ��Ϊ0
//	int i = 0;
//	while (i < 10) {
//		printf("%d ", arr[i]);
//		i++;
//	}
//	return 0;
//}




//�š�������
//������������+  -  *  /
//��λ��������>>  <<
//λ��������& | ^ (�롢�����)
//��ֵ��������=  +=  -+  *=  /=  &=  ^=  |=  >>=  <=
//��Ŀ���������� -  +  &  sizeof  ~  --  ++  *  (����)
//ע��sizeof�ǲ����������Ǻ���
//int main()
//{
//	int a = 2;
//	int b = a << 1;//���Ʋ����� -- �ƶ����Ƕ�����λ
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
//	printf("%d\n", ~a);//��λȡ���������ж�����λ�е����֣�1���0��0���1
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111(ԭ��)
//	//10000000000000000000000000000000(����)
//	//10000000000000000000000000000001(����) --- -1
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = ++a;//ǰ��++����++��ʹ��
//	printf("%d\n", b);//11
//	printf("%d\n", a);//11
//
//	int c = 10;
//	int d = c++;//����++����ʹ�ú�++
//	printf("%d\n", d);//10
//	printf("%d\n", c);//11
//	return 0;
//}


//int main()
//{
//	//ǿ������ת��
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


//ʮ�������ؼ���
//C�����ṩ�Ĺؼ���
//1.C�����ṩ�ģ������Լ������ؼ���
//2.�����������ǹؼ���
//ע��define��include���ǹؼ��֣���Ԥ����ָ��
//int main()
//{
//	{
//		int a = 10;//�Զ��������Զ����ٵ� - �Զ�����
//		//autoʡ�Ե���
//		//auto �µ�C����������Ҳ�������÷� - ��ʱ������
//	}
//	return 0;
//}


//int main()
//{
//	//����Ƶ����ʹ�õ����ݣ�����ڼĴ����У�����Ч��
//	register int num = 100;//����num��ֵ����ڼĴ�����
//	return 0;
//}


//typedef - �����ض���
//typedef unsigned int u_int;
//int main()
//{
//	u_int num = 100;
//	return 0;
//}


//static - ��̬��
//1.static���ξֲ��������ı��˾ֲ���������������(�������Ǹı��˱����Ĵ洢����)
//2.static����ȫ�ֱ�����ʹ�����ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ�(.c)�ڲ�����ʹ�ã�����Դ�ļ�����ʹ��
//3.static���κ�����static�ǽ��������ⲿ�������Ա�����ڲ����ӣ�ʹ�ú���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ��
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


//#define���峣���ͺ�
//define��һ��Ԥ����ָ��
//1.define�������
//#define MAX 100
//int main()
//{
//	printf("%d\n", MAX);
//	return 0;
//}


//2.define�����
//#define Add(x,y) x+y
//int main()
//{
//	printf("%d\n", 4 * Add(2, 3));//����ֱ���滻
//	return 0;
//}




//ʮһ��ָ��
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;// * �����ò�����,*pa����ͨ��pa����ĵ�ַ�ҵ�a
//	printf("%d\n", a);
//	return 0;
//}


//ָ������Ĵ�С
//ָ��Ĵ�С����ͬ��
//ָ����������ŵ�ַ��
//ָ����Ҫ���ռ�ȡ���ڵ�ַ�Ĵ洢��Ҫ���ռ�
//32λƽ̨ -- 4byte
//64λƽ̨ -- 8byte
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




//ʮ�����ṹ��
//�ṹ��ʹ��C����������������������
//�ṹ�������C���Դ����µ����ͳ���

//����һ��ѧ��
struct Stu {
	char name[20];
	int age;
	double socre;
};
//����һ���������
struct Book {
	char name[20];//��Ա����
	float price;
	char id[30];
};
int main()
{
	struct Stu s = { "zhangsan",20,85.5 };//�ṹ��Ĵ����ͳ�ʼ��
	printf("%s %d %lf\n", s.name, s.age, s.socre);//�ṹ�����.��Ա����
	struct Stu* ps = &s;
	printf("%s %d %lf\n", (*ps).name, (*ps).age, (*ps).socre);//д��1
	printf("%s %d %lf\n", ps->name, ps->age, ps->socre);//д��2
	return 0;
}