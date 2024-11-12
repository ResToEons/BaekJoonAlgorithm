#include <iostream>
#define MAX_SIZE 4

int main()
{
	int x, y, w, h;
	int wx, hy, xz, yz;
	int min = 1001;
	int* arr = new int[MAX_SIZE];

	std::cin >> x >> y >> w >> h;

	wx = w - x;
	arr[0] = wx;
	hy = h - y;
	arr[1] = hy;
	arr[2] = x;
	arr[3] = y;

	for (int i = 0; MAX_SIZE > i; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
	}

	std::cout << min;

	return 0;
}