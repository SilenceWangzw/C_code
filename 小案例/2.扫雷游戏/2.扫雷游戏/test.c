#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void menu()
{
	printf("********************************\n");
	printf("********      1.play      ******\n");
	printf("********      0.exit      ******\n");
	printf("********************************\n");
}
void game()
{
	char mine[ROWS][COLS];//����׵���Ϣ
	char show[ROWS][COLS];//����Ų�����׵���Ϣ

	//��ʼ������
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');

	//��ӡ����
	DisplayBoard(show, ROW, COL);

	//������
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);

	//�Ų���
	FineMine(mine, show, ROW, COL);

}
void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do {
		menu();
		printf("������:> ");
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
			printf("�����������������\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}