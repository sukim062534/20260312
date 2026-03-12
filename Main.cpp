#include <iostream>

using namespace std;

void Initialize(int* Pocket, int Size);
void Shuffle(int* Pocket, int Size);
void Pick(int* Pocket, int Size, int PickCount);

int main()
{
	int Size = 0;
	int PickCount = 0;

	cin >> Size;
	cin >> PickCount;

	int* Pocket = new int[Size];
	
	Initialize(Pocket, Size);

	Shuffle(Pocket, Size);

	Pick(Pocket, Size, PickCount);

	delete[] Pocket; 

	Pocket = nullptr;

	return 0;
}
void Initialize(int* Pocket, int Size)
{
	srand((unsigned int)time(NULL));

	for (int i = 0; i < Size; i++)
	{
		Pocket[i] = i + 1;
	}
}
void Shuffle(int* Pocket, int Size)
{
	for (int i = 0; i < Size * 10; i++)
	{
		int First = rand() % Size;
		int Second = rand() % Size;

		int Temp = Pocket[First];
		*(Pocket + First) = Pocket[Second];
		Pocket[Second] = Temp;
	}
}
void Pick(int* Pocket, int Size, int PickCount)
{
	if (Size < PickCount)
	{
		return;
	}

	for (int i = 0; i < PickCount; i++)
	{
		cout << Pocket[i] << ", ";
	}
}