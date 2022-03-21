#include<stdio.h>
#include<conio.h>
#include<windows.h>

void textcolor(int color_number)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color_number);
}

void gotoxy(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

unsigned char block_L[4][4] = { { 0, 0, 0, 0 },
								{ 0, 1, 0, 0 },
								{ 0, 1, 1, 1 },
								{ 0, 0, 0, 0 } };

void make_block();
void delete_block();

int x = 10;
int y = 10;
int count = 0;

void main()
{

	int ch = 0;
	
	
	while (1)
	{
		if (_kbhit())
		{
			ch = _getch();
			if (ch == 'a')
			{
				gotoxy(x, y);
				printf(" ");

				x--;
				gotoxy(x, y);
				printf("*");
			}
			else if (ch == 'd')
			{
				gotoxy(x, y);
				printf(" ");

				x++;
				gotoxy(x, y);
				printf("*");
			}
			else if (ch == 's')
			{
				gotoxy(x, y);
				printf(" ");

				y++;
				gotoxy(x, y);
				printf("*");
			}
			else if (ch == 'w')
			{
				gotoxy(x, y);
				printf(" ");

				y--;
				gotoxy(x, y);
				printf("*");
			}
		}
		
		if (count == 100)
		{
			count = 0;

			/*gotoxy(x, y);
			printf(" ");*/
			delete_block();

			y++;

			make_block();

			/*gotoxy(x, y);
			printf("*");*/

		}
		Sleep(10);
		count++;
	}

	printf("Hello World");
}


void make_block()
{
	for (int j = 0; j < 4; j++)
	{
		for (int i = 0; i < 4; i++)
		{
			if (block_L[j][i] == 1)
			{
				gotoxy(x+i, y+j);
				printf("*");
			}
			else
			{
				gotoxy(x+i, y+j);
				printf("-");
			}
		}
	}
}

void delete_block()
{
	for (int j = 0; j < 4; j++)
	{
		for (int i = 0; i < 4; i++)
		{
			if (block_L[j][i] == 1)
			{
				gotoxy(x+i, y+j);
				printf(" ");
			}
			else
			{
				gotoxy(x+i, y+j);
				printf(" ");
			}
		}
	}
}