#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//һ��ָ��
//1.ָ����ʲô
//ָ����Ǳ�����������ŵ�ַ�ı���
//��ַ��Ψһ��ʶһ���ַ�ռ��
//ָ��Ĵ�С��32λƽ̨��4���ֽڣ���64λƽ̨��8���ֽ�
//int main()
//{
//	int a = 10; //aռ4���ֽ�
//	int* pa = &a; //�õ�����a�ĵ�4���ֽ��еĵ�һ���ֽڵĵ�ַ
//	*pa = 20;
//	printf("%d\n", a);
//	return 0;
//}




//2.ָ���ָ������
//ָ�����͵�����
//ָ�����;�����ָ������õ�Ȩ���ж��
//ָ�����;�����ָ����һ�������߶�Զ(����)
//int main()
//{
//	int a = 0x11223344;
//
//	int* pa = &a;
//	*pa = 0;//������һ�ο��Է���4���ֽ�
//
//	char* pc = &a;
//	*pc = 0;//����Ȩ�޷����ı䣬������һ��ֻ�ܷ���1���ֽ�
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	char* pc = arr;
//	printf("%p\n", p);
//	printf("%p\n", p + 1);//һ������4���ֽ�
//
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);//һ������1���ֽ�
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	char* p = arr;
//	for (int i = 0; i < 10; i++)
//	{
//		*(p + i) = 1; //p+i��ʵ���±�Ϊi�ĵ�ַ
//	}
//
//	return 0;
//}




//3.Ұָ��
//Ұָ�����ָ��ָ���λ���ǲ���֪�ģ�����ġ�����ȷ�ġ�û����ȷ���Ƶģ�
//����ָ��δ��ʼ��
//int main()
//{
//	//�����p����һ��Ұָ��
//	int* p;//p��һ���ֲ�ָ��������ֲ���������ʼ����Ĭ�������ֵ
//	*p = 20;//�Ƿ������ڴ���
//
//	return 0;
//}


//ָ��Խ�����
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 10; i++) //Խ��
//	{
//		*p = i;
//		p++;
//	}
//	return 0;
//}


//ָ��ָ��Ŀռ��ͷ�
//int* test() {
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	*p = 20;
//	return 0;
//}


//��ι��Ұָ��
//ָ���ʼ��
//int main()
//{
//	//��ǰ��֪��pӦ�ó�ʼ��Ϊʲô��ַʱ��ֱ�ӳ�ʼ��ΪNULL
//	int* p = NULL;
//	//��ȷ֪����ʼ����ֵ
//	int a = 10;
//	int* pa = &a;
//	return 0;

//С��ָ��Խ��C���Ա����ǲ���������Խ����Ϊ��
//ָ��ָ��ռ��ͷż�ʱ��NULL
//ʹ��ָ��֮ǰ�����Ч��
//int main()
//{
//	int* p = NULL;
//	if (p != NULL) {
//		*p = 10;
//	}
//	return 0;
//}




//4.ָ������
//ָ��+-����
//#define MAX 5
//int main()
//{
//	float arr[MAX];
//	float* vp;
//	for (vp = &arr[0]; vp < &arr[MAX];) {
//		*vp++ = 0; //�ȼ��� *vp=0  vp++
//	}
//	for (int i = 0; i < 5; i++) {
//		printf("%f ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int* pend = arr + 9;
//	while (p <= pend) {
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}


//ָ��-ָ��:�õ���������ָ��֮���Ԫ�ظ���
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//ָ���ָ�������ǰ��������ָ��ָ��ͬһ��ռ�
//	printf("%d\n", &arr[9] - &arr[0]);
//	return 0;
//}


//ģ��ʵ�����ַ������Ⱥ���
//д��1
//int my_strlen(char* p)
//{
//	int count = 0;
//	while (*p != '\0')
//	{
//		p++;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int len = my_strlen("abc");
//	printf("%d\n", len);
//	return 0;
//}


//д��2:ָ��-ָ��
//int my_strlen(char* p)
//{
//	char* start = p;
//	while (*p != '\0')
//	{
//		p++;
//	}
//	return p - start;
//}
//int main()
//{
//	int len = my_strlen("abc");
//	printf("%d\n", len);
//	return 0;
//}
//ָ��Ĺ�ϵ����
//��׼�涨������ָ������Ԫ�ص�ָ����ָ������Ԫ�����һ��Ԫ�غ�����Ǹ��ڴ�λ�õ�ָ��Ƚ�
//����������ָ���һ��Ԫ��֮ǰ���Ǹ��ڴ�λ�õ�ָ����бȽ�




//5.ָ�������
//int main()
//{
//	int arr[10] = { 0 };
//	//����������Ԫ�صĵ�ַ
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	//[] -- ��һ����������2��arr������������
//	//arr[2] <===> *(p+2) <===> *(2+p) <===> *(2+arr) <===>  *(arr+2)  == 2[arr]
//	//2[arr] <===> *(2+arr)
//	return 0;
//}




//6.����ָ��
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa��ָ�������һ��ָ��
//	//ppa���Ƕ���ָ�����
//	int** ppa = &pa;//paҲ�Ǹ�������&paȡ��pa���ڴ��е���ʼ��ַ
//	return 0;
//}




//7.ָ������
//int main()
//{
//	int arr[10];//�������� - ������͵����������������
//	char ch[5];//�ַ����� - ��ŵ����ַ�
//	//ָ������ - ���ָ�������
//	int* parr[5];//����ָ�������
//	char* pch[5];
//
//	return 0;
//}




//�����ṹ��
//1.�ṹ�����͵�����
//�ṹ��һЩֵ�ļ��ϣ�����ֵ�����Ϳ��Բ�ͬ
//struct Stu {
//	//�ṹ��ĳ�Ա����
//	char name[20];//����
//	int age;//����
//	char id[20]//ѧ��
//};



//2.�ṹ���ʼ��
//struct Stu {
//	//�ṹ��ĳ�Ա����
//	char name[20];//����
//	int age;//����
//	char id[20]//ѧ��
//};
//int main()
//{
//	struct Stu s = { "zhangsan",18,11223344 };
//	return 0;
//}



//3.�ṹ���Ա����
//struct Stu {
//	//�ṹ��ĳ�Ա����
//	char name[20];//����
//	int age;//����
//	char id[20];//ѧ��
//};
//int main()
//{
//	struct Stu s = { "zhangsan",18,"11223344" };
//	printf("%s %d %s\n", s.name, s.age, s.id);
//	return 0;
//}



//4.�ṹ�崫��
//struct Stu {
//	
//	char name[20];
//	int age;
//	char id[20];
//};
//
//void print1(struct Stu t) {
//	printf("%s %d %s\n", t.name, t.age, t.id);
//}
//void print2(struct Stu* p) {
//	printf("%s %d %s\n", p->name, p->age, p->id);
//}
//int main()
//{
//	struct Stu s = { "zhangsan",18,"11223344" };
//	//дһ��������ӡs������
//	print1(s);//��ֵ����
//	print2(&s);//��ַ����
//	//����ѡ��ַ���ã������˷ѿռ�
//	return 0;
//}