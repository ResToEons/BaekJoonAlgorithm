#include <iostream>

int main()
{
	// A�� ���� �ö󰡴� ����, B�� �㿡 �������� ����, V�� �� ����
	int A, B, V;
	int days = 1;
	int currentHeight = 0;
	int deno;
	int numer;

	std::cin >> A >> B >> V;

	// Ax - B(x - 1) >= V | Ax - Bx + >= V | x (A - B) + B >= V | x(A - B) >= V - B | x >= V (A - B)
	
	deno = A - B;
	numer = V - B;
	
	if (numer % deno == 0)
	{
		days = numer / deno;
	}
	else
	{
		days = numer / deno;
		days++;
	}

	std::cout << days;

	return 0;
}