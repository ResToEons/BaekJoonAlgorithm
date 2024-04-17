#include <iostream>

int main()
{
	// A는 낮에 올라가는 미터, B는 밤에 내려가는 미터, V는 총 높이
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