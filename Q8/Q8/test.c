#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
///*
//编程实现一个游戏程序，会将连续三个字母中的一个隐去，由玩家填写隐去的那个字母，如屏幕上显示A ? C，则玩家需要输入B；屏幕上显示？B C，则玩家需要输入A。记录玩家完成20次游戏的时间以及正确率。
//*/
////
////int main(void) {
////    char character, position, answer, guess, c;
////    int i, count = 0;
////    double duration;
////    time_t start, end;
////
////    srand((unsigned int)(time(0)));    // 随机种子
////
////    start = time(NULL);    // 开始计时
////
////    for (i = 0; i < 2; i++) {
////        position = rand() % 3 + '0';    // 随机隐藏的位置0，1，2
////        character = rand() % 24 + 'A';  // 随机出现的第一个字母 A-X
////        printf("----- Round %d -----\n", i + 1);
////        if (position == '0') {
////            answer = character;
////            printf("? %c %c\n", character + 1, character + 2);
////        }
////        else if (position == '1') {
////            answer = character + 1;
////            printf("%c ? %c\n", character, character + 2);
////        }
////        else if (position == '2') {
////            answer = character + 2;
////            printf("%c %c ?\n", character, character + 1);
////        }
////        printf("Please enter the correct letter: ");
////
//       /* guess = getchar();
//        do { scanf("%c", &c); } while (c != '\n');
//        if (answer == guess) {
//            printf("Correct!\n");
//            count++;
//        }
//        else {
//            printf("Wrong! The correct letter is %c\n", answer);
//        }
//    }*/
////    end = time(NULL);  // 停止计时
////    duration = ((double)(end - start));
////    printf("Win Ratio: %f %%\n", count * 100 / 20.0);
////    printf("Game Time: %f s\n", duration);
////    return 0;
////}
//int main()
//{
//	char charater, pos, answer, guess, c;
//	int i, count;
//	count = 0;
//	srand((size_t)time(NULL));
//	time_t start, end;
//	double total;
//	start = time(NULL);
//	for (i = 0; i < 20; i++)
//	{
//		pos = rand() % 2 + '0';
//		charater = rand() % 24+ 'A';
//		if (pos == '0')
//		{
//			answer = charater;
//			printf("? %c %c\n", charater + 1, charater + 2);
//		}
//		else if (pos == '1')
//		{
//			answer = charater+1;
//			printf("%c ? %c\n", charater, charater + 2);
//		}
//		else if (pos == '2')
//		{
//			answer = charater+3;
//			printf("%c %c ?\n", charater, charater+1);
//		}
//		
//		printf("请输入答案：");
//		guess = getchar();
//		do
//		{
//			scanf("%c", &c);//清除缓冲区
//		} while(c!='\n');
//       
//		if (answer==guess)
//		{
//			printf("恭喜你答对了\n");
//			count++;
//			}
//		else
//		{
//			printf("很可惜你答错了，正确答案是：%c\n", answer);
//			
//		}
//		/*guess = getchar();
//		do { scanf("%c", &c); } while (c != '\n');
//		if (answer == guess) {
//			printf("Correct!\n");
//			count++;
//		}
//		else {
//			printf("Wrong! The correct letter is %c\n", answer);
//		}
//	*/
//		
//	}
//	end = time(NULL);
//	total = (double)(end - start);
//	printf("花费的时间为：%lf", total);
//	return 0;
//}
////#include <string.h>
////#define n 5
////int main()
////{
////    int a[5+5];
////    printf("%d\n", strlen("0\t\n\0C011\1"));
////}
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#include <time.h>
//int main()
//{
//	char charater, pos, answer, guess, c;
//	int i, count;
//	count = 0;
//	time_t start, end;
//	double total, correctcount;
//	srand((unsigned int)time(NULL));
//	start = time(NULL);
//	for (i = 0; i < 20; i++)
//	{
//		pos = rand() % 3 + '0';
//		charater = rand() % 24 + 'A';
//		if (pos == '0')
//		{
//			answer = charater;
//			printf("? %c %c\n", charater + 1, charater + 2);
//		}
//		else if (pos == '1')
//		{
//			answer = charater + 1;
//			printf("%c ? %c\n", charater, charater + 2);
//		}
//		else if (pos == '2')
//		{
//			answer = charater + 2;
//			printf("%c %c ?\n", charater, charater + 1);
//		}
//		
//		printf("please put corret answer:");
//		guess = getchar();
//		do
//		{
//			scanf("%c", &c);
//		} while (c != '\n');
//		if (answer == guess)
//		{
//			printf("Correct!\n");
//			count++;
//		}
//		else
//		{
//			printf("No Correct is %c\n", answer);
//		}
//	}
//	end = time(NULL);
//	total = (double)(end - start);
//	printf("Correctcount:%lf\n", ((double)count / 20));
//	printf("Cost Time :%lfs\n", total);
//	return 0;
//}
/*
编程实现一个猜拳游戏，电脑的出拳由随机函数生成。要求游戏者在开始游戏时输入姓名，程序会保存游戏者的胜负场次情况。
https://blog.csdn.net/m0_63033419/article/details/124832992
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int draw = 0;
int lose = 0;
int win = 0;
int human = 0;
int comp = 0;
int is_winer = 0;

void menu()
{
	printf("****************************************\n");
	printf("********* Finger-Guessing Game *********\n");
	printf("****************************************\n");
	printf("**************** 1.play ****************\n");
	printf("**************** 0.exit ****************\n");
	printf("****************************************\n");
}

void Displayer(int comp, int human)
{
	printf("Computer is: ");
	switch (comp)
	{
	case 0:
		printf("Rock\n");
		break;
	case 1:
		printf("Scissors\n");
		break;
	case 2:
		printf("Paper\n");
		break;
	}
	printf("Player is:");
	switch (human)
	{
	case 0:
		printf("Rock\n");
		break;
	case 1:
		printf("Scissors\n");
		break;
	case 2:
		printf("Paper\n");
		break;
	}
}

/*判断输赢*/
void disp_result(int is_winer)
{
	switch (is_winer)
	{
	case 0:
		printf("DRAW!\n");
		draw++;
		break;
	case 1:
		printf("Computer Win\n");
		lose++;
		break;
	case 2:
		printf("Player Win\n");
		win++;
		break;
	}
}

void game()
{
	int number = 0;
	printf("Game Begin!!!\n");

	printf("Please select the number of games: ");
	scanf("%d", &number);

	while (number)
	{
		comp = rand() % 3;
		printf("Your Turn: ");
		printf("(0)-Rock, (1)-Scissors, (2)-Paper\n");
		do
		{
			scanf("%d", &human);
			printf("-----------Finger-Guessing Game-------------\n");
			if (human < 0 || human > 2)
			{
				printf("Input Error! Please input again.\n");
			}
			is_winer = (human - comp + 3) % 3;
			disp_result(is_winer);
			Displayer(comp, human);
		} while (human < 0 || human > 2);

		number--;
	}
}

int main()
{
	char name[20], c;
	int input = 0;

	srand((int)time(NULL));

	printf("Please Input Your Name: ");
	scanf("%s", name);

	do {
		menu();
		printf("Choice:");
		scanf("%d", &input);
		do { scanf("%c", &c); } while (c != '\n');
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("Exit the Game!\n");
			break;
		default:
			printf("Input Error! Please input again.\n");
			break;
		}
	} while (input);
	//展示玩家成绩	
	printf("PLAYER: %s\n%d DRAW %d LOSE %d WIN\n", name, draw, lose, win);
	return 0;
}