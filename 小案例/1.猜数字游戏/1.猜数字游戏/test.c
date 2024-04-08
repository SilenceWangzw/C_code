#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//写一个猜数字游戏
//电脑能自动生成一个1~100之间的随机数
//玩家猜数字，猜数字的过程中，根据猜测数据的大小给出反馈，直到猜对，游戏结束
void menu()
{
	printf("*****************************\n");
	printf("**********  1.play  *********\n");
	printf("**********  0.eixt  *********\n");
	printf("*****************************\n");
}
void game()
{
	//游戏的逻辑
	//1.生成随机数
	int r = rand() % 100 + 1;
	//2.猜数字
	int guess = 0;
	int count = 5;
	while (count != 0)
	{
		printf("还有%d次机会\n", count);
		printf("请猜数字:> ");
		scanf("%d", &guess);
		if (guess > r)
		{
			printf("猜大了\n");
		}
		else if (guess < r)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("猜对了\n");
			break;
		}
		count--;
	}
	if (count == 0)
	{
		printf("用完了所有的机会，猜数字失败，正确的值是%d\n", r);
	}
}
int main()
{
	int input = 0;
	//设置随机数的生成起点
	//整个工程中只要调用一次就可以了
	srand((unsigned int)time(NULL));
	do {
		//打印菜单
		menu();

		//选择
		printf("请选择:> ");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("选择错误，重新选择\n");
				break;
		}

	} while (input);
	return 0;
}
