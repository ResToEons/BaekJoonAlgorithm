#include <iostream>
#include <iomanip>

int main()
{
	double A, B;

	std::cin >> A >> B;

	std::cout << std::setprecision(10) << A / B;

	return 0;
}