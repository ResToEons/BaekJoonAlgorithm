#include <iostream>

int main()
{
	int num;
	int answer = 0;

	std::cin >> num;

	for (int i = 1; num >= i; i++)
		answer += i;

	std::cout << answer;

	return 0;
}