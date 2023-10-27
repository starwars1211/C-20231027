#include <iostream>

#define MAXCOUNT 52

using namespace std;

int main()
{
	int Pocket[MAXCOUNT];

	for (int i = 0; i < MAXCOUNT; ++i)
	{
		Pocket[i] = i + 1;
	}

	srand((unsigned int)time(nullptr));
	
	//random_shuffle(Pocket[0], Pocket[52]);
	//shuffl , 알고리즘, algorithm

	for (int i = 0; i < 10000; ++i)
	{

	int First = rand() % MAXCOUNT;
	int Second = rand() % MAXCOUNT;
	int Temp = Pocket[First];
	Pocket[First] = Pocket[Second];
	Pocket[Second] = Temp;
	
	}	
	
	int CumputerScore = 0;
	int PlayerScore = 0;
	int PickCard[4];
	for (int i = 0; i < 4; ++i)
	{
		PickCard[i] = Pocket[i];
	}

	int CardType = Pocket[1] / 13;

	if (CardType == 0)
	{
		//Spade
		cout << "♠Spade ";
	}
	else if (CardType == 1)
	{
		//Clover
		cout << "♣Clover ";
	}
	else if (CardType == 2)
	{
		//Heart
		cout << "♥Heart ";
	}
	else if (CardType == 3)
	{
		//Diamond
		cout << "◆Diamond ";
	}

	else
	{ 
		cout << (CardNumber[i] + 1);

	}

	int CardNumber = Pocket[i] % 13 + 1;
	if (CardNumber == 10)

		if (i < 2)
		{
			if (CardNumber > 10)
			{
				Card Number += 10;
		}
	}
	{
	// Com
		ComputerScore += (CardNumber + 1);
	}
	else
	{
		//player
		PlaterScre += (CardNumber + 1);
	}

	if (ComputerScore > PlaterScore)
	{
		cout << ComputerScore << " : " << PlayerScore << endl;
		cout << "Computer Win" << endl;

	}
	else (ComputerScore < PlaterScore)
	{
		cout << ComputerScore << " : " << PlayerScore << endl;
		cout << "Player Win" << endl;

	}

	return 0;
}