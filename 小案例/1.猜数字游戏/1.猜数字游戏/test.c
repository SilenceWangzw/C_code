#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//дһ����������Ϸ
//�������Զ�����һ��1~100֮��������
//��Ҳ����֣������ֵĹ����У����ݲ²����ݵĴ�С����������ֱ���¶ԣ���Ϸ����
void menu()
{
	printf("*****************************\n");
	printf("**********  1.play  *********\n");
	printf("**********  0.eixt  *********\n");
	printf("*****************************\n");
}
void game()
{
	//��Ϸ���߼�
	//1.���������
	int r = rand() % 100 + 1;
	//2.������
	int guess = 0;
	int count = 5;
	while (count != 0)
	{
		printf("����%d�λ���\n", count);
		printf("�������:> ");
		scanf("%d", &guess);
		if (guess > r)
		{
			printf("�´���\n");
		}
		else if (guess < r)
		{
			printf("��С��\n");
		}
		else
		{
			printf("�¶���\n");
			break;
		}
		count--;
	}
	if (count == 0)
	{
		printf("���������еĻ��ᣬ������ʧ�ܣ���ȷ��ֵ��%d\n", r);
	}
}
int main()
{
	int input = 0;
	//������������������
	//����������ֻҪ����һ�ξͿ�����
	srand((unsigned int)time(NULL));
	do {
		//��ӡ�˵�
		menu();

		//ѡ��
		printf("��ѡ��:> ");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("�˳���Ϸ\n");
				break;
			default:
				printf("ѡ���������ѡ��\n");
				break;
		}

	} while (input);
	return 0;
}
