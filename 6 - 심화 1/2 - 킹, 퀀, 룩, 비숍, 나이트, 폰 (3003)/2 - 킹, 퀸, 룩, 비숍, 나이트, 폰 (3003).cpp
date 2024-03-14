#include <iostream>
#define TOTAL_UNIT 6
int main()
{
	int chessUnit[TOTAL_UNIT] = { 1, 1, 2, 2, 2, 8 };
	int tempChessUnit[TOTAL_UNIT];

	for (int i = 0; TOTAL_UNIT > i; i++)
	{
		std::cin >> tempChessUnit[i];
	}

	for (int i = 0; TOTAL_UNIT > i; i++)
	{
		std::cout << chessUnit[i] - tempChessUnit[i] << " ";
	}

	return 0;
}