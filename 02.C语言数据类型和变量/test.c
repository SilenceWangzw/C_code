#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//һ���������ͽ���
//�������и��ָ��������ݣ������Ϊ�˽�������е�����
//�����������д���� -- �����������������е�����
//������ֻ��֪�������ݵ����ͣ���֪����ô��������
//C���԰����ͷ�Ϊ����
//1.�������ͣ�C���Ա���;��еģ����ַ��͡����͡������͡���������
//2.�Զ������ͣ��Լ�����ģ������顢�ṹ�塢ö�١�������


//�������� -- ������ʾ���
//ʹ�ò�������Ҫ����ͷ�ļ�stdbool.h
//C�����й涨0��ʾ�٣���0��ʾ��
//#include<stdbool.h>
//int main()
//{
//	_Bool flag1 = true;//д��1
//	bool flag2 = false;//д��2
//	if (flag1)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}


//�����������͵ĳ���
//ÿһ���������Ͷ����Լ��ĳ��ȣ�ʹ�ò�ͬ���������ͣ��ܹ����������Ȳ�ͬ�ı���
//�����ĳ��Ȳ�ͬ���洢�����ݷ�Χ����������
//sizeof��һ���ؼ��֣�Ҳ�ǲ�������������������������ͳ��ȵģ���λ���ֽ�
//sizeof�������Ĳ��������������ͣ�Ҳ�����Ǳ������߱��ʽ
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
//C���Ա�׼�涨��sizeof(long) >= sizeof(int)


//int main()
//{
//	int a = 10;
//	printf("%zd\n", sizeof(int));
//	printf("%zd\n", sizeof(a));
//	printf("%zd\n", sizeof a);//����ŵ��Ǳ��ʽ������ǣ����ſ�ʡ�ԣ����Ͳ���ʡ������
//	return 0;
//}


//int main()
//{
//	short s = 2;
//	int b = 10;
//	printf("%zd\n", sizeof(s = b + 1));//sizeof������ŵ��Ǳ��ʽ�����ʽ������ʵ����
//	printf("%d\n", s);
//	return 0;
//}




//����signed��unsigned
//C������ʹ��signed��unsigned�ؼ��������ַ��ͺ����͵�
//signed�ؼ��֣���ʾһ�����ʹ��������ţ�������ֵ
//unsigned�ؼ��֣���ʾ�����Ͳ����������ţ�ֻ�ܱ�ʾ���������
//int main()
//{
//	//signed int --- �з��ŵ�int
//	signed int num1 = 100;
//	num1 = -200;
//
//	//unsigned int -- �޷��ŵ�int
//	unsigned int num2 = 100;
//	num2 = 1000;
//	return 0;
//}
//char�������з��Ż����޷����أ������ȷ������ȡ���ڱ�������ʵ��
//�󲿷ֱ������� char == signed char


//int == signed int
//�����з��ŵ�������ӡӦ��ʹ��%d
//�����޷��������Ķ���Ӧ��ʹ��%u
//int main()
//{
//	int num = -100;
//	printf("%d\n", num);
//	return 0;
//}




//��������
//1.�����Ĵ���
//int main()
//{
//	unsigned int age;//���ͱ���
//	char ch;//�ַ�����
//	float score;//�����ȸ����ͱ���
//	double weight;//˫���ȸ����ͱ���
//	return 0;
//}


//2.�����ĳ�ʼ��
//����������ͬʱ��ֵ���ͽ�����������ʼ��
//���δ��ʼ���������ŵ������ֵ
//int main()
//{
//	unsigned int age = 10;
//	age = 20;//��ֵ
//	printf("%u\n", age);
//
//	char ch = 'q';
//	printf("%c\n", ch);
//
//	float score = 3.14f;//�������f��Ĭ����double����
//	printf("%f\n", score);
//
//	double weight = 4.5;
//	printf("%lf\n", weight);
//
//	return 0;
//}


//3.�����ķ���
//ȫ�ֱ������ڴ������ⲿ����ı�������ȫ�ֱ���
//�ֲ��������ڴ������ڲ�����ı������Ǿֲ�����
//int num = 100;//ȫ�ֱ���
//int main()
//{
//	int num = 10;//�ֲ�����
//	printf("%d\n", num);
//	return 0;
//}
//ע�����ֲ�������ȫ�ֱ���������ͬ���ֲ���������ʹ��




//�ġ�����������
//������Ҳ�������
// +  -  *  /  %
//int main()
//{
//	printf("%d\n", 33 + 42);//  + ��Ϊ��������33��42��Ϊ���������ֱ�Ϊ����������Ҳ����������� + Ҳ��˫Ŀ������
//	int a = 10;
//	int b = 20;
//	printf("%d\n", a + b);
//	printf("%d\n", a + 23);
//	return 0;
//}


//int main()
//{
//	printf("%d\n", 33 - 42);//  + ��Ϊ��������33��42��Ϊ���������ֱ�Ϊ����������Ҳ����������� + Ҳ��˫Ŀ������
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
//	//���ŵ�����������������õ���Ҳ������
//	printf("%d\n", 9 / 3);
//	printf("%d\n", 9 / 4);
//	printf("%d\n", 10 / 4);
//
//	//��������������һ��С�����õ��ľ���С��
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
//		printf("ż��\n");
//	}
//	return 0;
//}
//ע��ȡģ�����������������С��


//������ģ�Ĺ��򣺽�����������ɵ�һ���������������ž���
//int main()
//{
//	printf("%d\n", 11 % -5);//1
//	printf("%d\n", -11 % -5);//-1
//	printf("%d\n", -11 % 5);//-1
//	return 0;
//}




//�塢��ֵ������
//int main()
//{
//	int a = 0;//��ʼ��
//	a = 10;//��ֵ,  = �Ǹ�ֵ������
//	return 0;
//}


//1.������ֵ
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = 0;
//	c = b = a + 3;//������ֵ�������������θ�ֵ --- ���Ƽ�ʹ��
//	return 0;
//}


//2.���ϸ�ֵ
// +=  -=  *=  /=  %=
//int main()
//{
//	int a = 0;
//	a += 10;// �ȼ��� a = a + 10;
//	return 0;
//}




//������Ŀ������
// ++  --  +(����)  -(����)
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
//	int b = ++a;//ǰ��++  ---  ��++��ʹ��
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}


//int main()
//{
//	int a = 5;
//	int b = a++;//����++  ---  ��ʹ�ú�++
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




//�ߡ�ǿ������ת��
//int main()
//{
//	int a = (int)3.14; //��3.14ǿ��ת����int���ͣ������������֣�С�����ֶ���
//	printf("%d\n", a);
//
//	return 0;
//}