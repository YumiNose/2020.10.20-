
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void InitRand()
{
	srand((unsigned int)time(NULL));
}

int Dice()
{
	return rand() % 6 + 1;
}

int main()
{
	for (;;)
	{
		int a = 0;

		cout << "サイコロの出た目は？" << endl;
		cin >> a;

		if (Dice != a)
		{
			cout << "もう一回！" << endl;
		}
		else
		{
			cout << "やった！当たりです！" << endl;
			break;
		}

	}
}
