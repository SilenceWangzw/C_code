#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//һ���ṹ�����͵�����
//�ṹ��һЩֵ�ļ��ϣ���Щֵ��Ϊ��Ա�������ṹ��ÿ����Ա�����ǲ�ͬ���͵ı���
//��������һ���飺���������ߡ����ۡ����
//struct Book
//{
//	char book_name[20];
//	char author[20];
//	float price;
//	char id[19];
//};


//�����ṹ�����ͣ�����ȫ������������ʡ������
//ֻ��������ʱ�����ṹ�����
//struct
//{
//	char c;
//	int i;
//	double d;
//}s1, s2;




//�����ṹ������Ĵ����ͳ�ʼ��
//1.����
//��������1��
//struct Book
//{
//	char book_name[20];
//	char author[20];
//	float price;
//	char id[19];
//};
//int main()
//{
//	struct Book b1;//����һ���ṹ�����b1;
//	return 0;
//}


//��������2
//struct Book
//{
//	char book_name[20];
//	char author[20];
//	float price;
//	char id[19];
//}b2;//����һ���ṹ�����b2
//int main()
//{
//	return 0;
//}


//2.��ʼ��
//struct Book
//{
//	char book_name[20];
//	char author[20];
//	float price;
//	char id[19];
//};
//int main()
//{
//	//����1�����սṹ���Ա��˳���ʼ��
//	struct Book b1 = { "C�������","wzw",38.8f,"2024" };
//
//	//����2������ָ���Ե�˳���ʼ��
//	struct Book b2 = { .book_name = "C�������",.author = "wzw",.price = 38.8f,.id = "2024" };
//
//	printf("%s %s %.2f %s\n", b1.book_name, b1.author, b1.price, b1.id);
//	printf("%s %s %.2f %s\n", b2.book_name, b2.author, b2.price, b2.id);
//
//	return 0;
//}


//3.�ṹ���������
//struct Node
//{
//	int data;//������� -- ������
//	struct Node* next;//�����һ�����ĵ�ַ -- ָ����
//};




//�����ṹ���ڴ����
//�ṹ��ĳ�Ա���ڴ����Ǵ��ڶ��������
//struct S1
//{
//	char c1;
//	char c2;
//	int n;
//};
//struct S2
//{
//	char c1;
//	int n;
//	char c2;
//};
//int main()
//{
//	printf("%zd\n", sizeof(struct S1));
//	printf("%zd\n", sizeof(struct S2));
//	return 0;
//}
//�ṹ���ڴ�������
//�ٽṹ���һ����Ա���뵽�ͽṹ�������ʼλ��ƫ����Ϊ0�ĵ�ַ
//��������Ա����Ҫ���뵽���������������ĵ�ַ��
//  ��������������Ĭ�ϵ�һ����������VS��Ĭ��Ϊ8��Linux��gccû��Ĭ�϶�����������ó�Ա������С�Ľ�Сֵ
//�۽ṹ���ܴ�СΪ����������ÿ����Ա�����У����ж����������ģ���������
//�����Ƕ���˽ṹ�壬Ƕ�׵Ľṹ���Ա���뵽�Լ��ĳ�Ա������������������
//Ϊ�˷�ֹ�˷ѿռ䣬���ʱ������ռ�ÿռ�С�ĳ�Ա������һ��




//�ġ��ṹ�崫��
//struct S
//{
//	int arr[1000];
//	int n;
//	char ch;
//};
//void print1(struct S tmp)
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", tmp.arr[i]);
//	}
//	printf("\n");
//	printf("%d\n", tmp.n);
//	printf("%c\n", tmp.ch);
//}
//void print2(struct S* ps)
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	printf("\n");
//	printf("%d\n", ps->n);
//	printf("%c\n", ps->ch);
//}
//int main()
//{
//	struct S s = { {1,2,3,4,5,6,7,8,9,10},10,'w' };
//
//	print1(s);//��ֵ����
//	print2(&s);//��ַ����
//	return 0;
//}
//�������ε�ʱ�򣬲�������Ҫѹջ������ʱ��Ϳռ��ϵ�ϵͳ����
//�������һ���ṹ�����ʱ���ṹ����󣬲���ѹջ��ϵͳ�����ϴ����Իᵼ�������½�
//����ʹ�ô�ַ���ã�����ռ��ʱ����˷�
