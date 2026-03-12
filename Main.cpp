#include <iostream>
#include "Engin.h"

using namespace std;

struct InnerType
{
	int A;
	int B;
};
struct CustomDataType
{
	int A;
	int B;
	float C;
	bool D;
	InnerType Inner;
};

class AActor
{
public:
	int X;
	int Y;

	void Add()
	{

	}
	void Move()
	{
		this->Add();
	}

};


int main()//엔진 실행
{
	CustomDataType Data;
	CustomDataType* P = &Data;
	Data.A=1;
	std::cout << (*P).A;
	std::cout << P->A;

	AActor* Player = nullptr;
	Player = new AActor();

	Player->Move();//플레이어가 움직인다

	delete Player;
	Player = nullptr;

	bool bIsRunning = true;

	//Gameloop
	while (bIsRunning) //frame
	{
		int KeyCode = Input();
		Tick(KeyCode);
		Render();
	}

	return 0;
}