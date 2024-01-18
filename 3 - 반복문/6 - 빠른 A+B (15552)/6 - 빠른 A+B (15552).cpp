#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);

	int num;
	int A, B;

	std::cin >> num;

	for (int i = 0; num > i; i++)
	{
		std::cin >> A >> B;

		std::cout << A + B << "\n";
	}

	return 0;
}