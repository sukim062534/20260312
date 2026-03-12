#include <iostream>
#include <conio.h>

using namespace std;



int main()
{
	int Game[10][10] =
	{
	{ 1,1,1,1,1,1,1,1,1,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,1,1,1,1,1,1,1,1,1 }
	};

	int PlayerX = 1;
	int PlayerY = 1;

	for (;;)
	{
		for (int Y = 0; Y < 10; ++Y)
		{
			for (int X = 0; X < 10; ++X)
			{

				if (PlayerX == X && PlayerY == Y)
				{
					cout << "P";
				}
				else if (Game[Y][X] == 1)
				{
					cout << "#";

				}
				else if (Game[Y][X] == 0)
				{
					cout << " ";
				}

			}
			cout << endl;
		}
	
		int Key;
		Key = _getch();
		
		if (Key == 'w')
		{
			if (Game[PlayerY - 1][PlayerX] == 0)
			{
				PlayerY--;
			}
		}
		if (Key == 'a')
		{
			if (Game[PlayerY][PlayerX - 1] == 0)
			{
				PlayerX--;
			}
		}
		if (Key == 's')
		{
			if (Game[PlayerY+1][PlayerX] == 0)
			{
				PlayerY++;
			}
		}
		if (Key == 'd')
		{
			if (Game[PlayerY][PlayerX +1] == 0)
			{
				PlayerX++;
			}
		}

		system("cls");
	}
	return 0;
}
