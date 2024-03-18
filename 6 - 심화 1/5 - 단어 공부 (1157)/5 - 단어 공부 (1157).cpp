#include <iostream>
#define ALPHABET_NUM 26
int main()
{
	char answer;
	int length = 0;
	int alphaCnt[ALPHABET_NUM] = { 0 };
	int asciiIdx = 0;
	int max = -1;
	int maxCnt = 0;
	std::string str;

	std::cin >> str;

	length = str.length();

	for (int i = 0; length > i; i++)
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			asciiIdx = str[i] - 65;
			alphaCnt[asciiIdx]++;
		}
		else if (str[i] >= 97 && str[i] <= 122)
		{
			asciiIdx = str[i] - 97;
			alphaCnt[asciiIdx]++;
		}
	}

	for (int i = 0; ALPHABET_NUM > i; i++)
	{
		if (max < alphaCnt[i])
		{
			max = alphaCnt[i];
			answer = i + 65;
		}
	}

	for (int i = 0; ALPHABET_NUM > i; i++)
	{
		if (max == alphaCnt[i])
		{
			maxCnt++;
		}
	}

	if (maxCnt == 1)
	{
		std::cout << answer;
	}
	else
	{
		answer = '?';
		std::cout << answer;
	}

	return 0;
}