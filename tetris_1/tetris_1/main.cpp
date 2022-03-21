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
//===================================================================
//-------------------------------------------------------------------

void make_background();
void print_background();
void make_block();
void delete_block();
void insert_block();


int count = 0;

int x = 3;
int y = 3;


unsigned char background[22][12] = { { 1,1,1,1,1,1,1,1,1,1,1,1 },
										{ 1,0,0,0,0,0,0,0,0,0,0,1 },
										{ 1,0,0,0,0,0,0,0,0,0,0,1 },
										{ 1,0,0,0,0,0,0,0,0,0,0,1 },
										{ 1,0,0,0,0,0,0,0,0,0,0,1 },
										{ 1,0,0,0,0,0,0,0,0,0,0,1 },
										{ 1,0,0,0,0,0,0,0,0,0,0,1 },
										{ 1,0,0,0,0,0,0,0,0,0,0,1 },
										{ 1,0,0,0,0,0,0,0,0,0,0,1 },
										{ 1,0,0,0,0,0,0,0,0,0,0,1 },
										{ 1,0,0,0,0,0,0,0,0,0,0,1 },
										{ 1,0,0,0,0,0,0,0,0,0,0,1 },
										{ 1,0,0,0,0,0,0,0,0,0,0,1 },
										{ 1,0,0,0,0,0,0,0,0,0,0,1 },
										{ 1,0,0,0,0,0,0,0,0,0,0,1 },
										{ 1,0,0,0,0,0,0,0,0,0,0,1 },
										{ 1,0,0,0,0,0,0,0,0,0,0,1 },
										{ 1,0,0,0,0,0,0,0,0,0,0,1 },
										{ 1,0,0,0,0,0,0,0,0,0,0,1 },
										{ 1,0,0,0,0,0,0,0,0,0,0,1 },
										{ 1,0,0,0,0,0,0,0,0,0,0,1 },
										{ 1,1,1,1,1,1,1,1,1,1,1,1 } };


unsigned char block_L[4][4] = { { 0,0,0,0},
								{ 0,1,0,0 },
								{ 0,1,1,1 },
								{ 0,0,0,0 } };


void main()
{


	int ch = 0;

	make_background();
	print_background();

	make_block();

	while (1)
	{
		//----------------------------------
		if (_kbhit())
		{
			ch = _getch();

			if (ch == 'a')
			{
				delete_block();
				x--;
				make_block();

			}
			else if (ch == 's')
			{
				delete_block();
				y++;
				make_block();
			}
			else if (ch == 'd')
			{
				delete_block();
				x++;
				make_block();
			}
			else if (ch == 'w')
			{
				delete_block();
				y--;
				make_block();
			}
		}
		//----------------------------------
		if (count == 30)
			//if(0)
		{
			count = 0;

			if (y <= 17)
			{
				delete_block();
				y++;
				make_block();
			}
			else
			{
				insert_block();
				print_background();

				y = 3;
			}
		}

		Sleep(10);

		count++;

	}

}



int back_offset_x = 0;
int back_offset_y = 0;

void make_background()
{
	for (int j = 0; j < 22; j++)
	{
		for (int i = 0; i < 12; i++)
		{
			if (background[j][i] == 1)
			{
				gotoxy(back_offset_x + i, back_offset_y + j);
				printf("*");
			}
			else
			{
				gotoxy(back_offset_x + i, back_offset_y + j);
				printf("-");
			}
		}
	}
}



void print_background()
{
	for (int j = 0; j < 22; j++)
	{
		for (int i = 0; i < 12; i++)
		{
			if (background[j][i] == 1)
			{
				gotoxy(back_offset_x + i + 15, back_offset_y + j);
				printf("1");
			}
			else
			{
				gotoxy(back_offset_x + i + 15, back_offset_y + j);
				printf("0");
			}
		}
	}
}


void make_block()
{
	for (int j = 0; j < 4; j++)
	{
		for (int i = 0; i < 4; i++)
		{
			if (block_L[j][i] == 1)
			{
				gotoxy(x + i, y + j);
				printf("*");
			}
			else
			{
				gotoxy(x + i, y + j);
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
				gotoxy(x + i, y + j);
				printf("-");
			}
			else
			{
				gotoxy(x + i, y + j);
				printf("-");
			}
		}
	}
}



void insert_block()
{
	for (int j = 0; j < 4; j++)
	{
		for (int i = 0; i < 4; i++)
		{
			if (block_L[j][i] == 1)
			{
				background[j + y][i + x] = 1;
			}
		}
	}
}