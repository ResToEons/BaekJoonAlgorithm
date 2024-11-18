#include <iostream>

int main()
{
	int A, B, C;
	int sum;
	std::cin >> A >> B >> C;

	sum = A + B + C;

	if (sum != 180)
		std::cout << "Error";
	else if (A == B && B == C)
		std::cout << "Equilateral";
	else if (A != B && A != C && B != C)
		std::cout << "Scalene";
	else
		std::cout << "Isosceles";

	return 0;
}