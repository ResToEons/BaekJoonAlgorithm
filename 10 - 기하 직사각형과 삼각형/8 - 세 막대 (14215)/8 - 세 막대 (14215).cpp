#include <iostream>

int main()
{
	int a, b, c;
	int max;
	int sumSides;
	int answer = 0;
	std::cin >> a >> b >> c;

	if (a > b && a > c)
	{
		max = a;
		sumSides = b + c;

		if (max >= sumSides)
			max = (sumSides - 1);

		answer = max + sumSides;
	}
	else if (b > a && b > c)
	{
		max = b;
		sumSides = a + c;

		if (max >= sumSides)
			max = (sumSides - 1);

		answer = max + sumSides;
	}
	else
	{
		max = c;
		sumSides = a + b;

		if (max >= sumSides)
			max = (sumSides - 1);

		answer = max + sumSides;
	}

	std::cout << answer;

	return 0;
}