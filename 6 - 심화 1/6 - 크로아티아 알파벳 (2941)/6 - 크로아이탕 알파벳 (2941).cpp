#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

int main()
{
	int strLength = 0;
	int answer = 0;
	int tmp = 0;
	std::string str;
	std::vector<std::string> cro = {
		"c=", "c-", "dz=", "d-",
		"lj", "nj", "s=", "z="
	};

	std::cin >> str;

	strLength = str.length();

	for (int i = 0; cro.size() > i; i++)
	{
		while ((tmp = str.find(cro[i])) != std::string::npos)
		{
			str.replace(tmp, cro[i].size(), "*");
		}
	}

	answer = str.length();

	std::cout << answer;

	return 0;
}