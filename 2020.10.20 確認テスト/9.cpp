
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

		cout << "�T�C�R���̏o���ڂ́H" << endl;
		cin >> a;

		if (Dice != a)
		{
			cout << "�������I" << endl;
		}
		else
		{
			cout << "������I������ł��I" << endl;
			break;
		}

	}
}
