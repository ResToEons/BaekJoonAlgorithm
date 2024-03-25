#include <iostream>
#include <string>
#define ALPHABET_NUM 26
int main()
{
	int previousChar;
	int currentChar;
	int num = 0;
	int answer = 0;
	bool isAnswer = true;
	bool alphabet[ALPHABET_NUM] = { false };
	std::string str;
	std::cin >> num;

	for (int i = 0; num > i; i++)
	{
		std::cin >> str;

		for (int j = 0; str.length() > j; j++)
		{
			if (j == 0)
			{
				previousChar = str[0] - 97;
				alphabet[previousChar] = true;
			}
			else
			{
				if (previousChar == str[j] - 97)
				{
					// Do Nothing
				}
				else
				{
					previousChar = str[j] - 97;

					if (alphabet[previousChar])
					{
						isAnswer = false;
						break;
					}
					else
					{
						alphabet[previousChar] = true;
					}
				}
			}
		}

		if (isAnswer)
			answer++;
		else
		{
			// Do Nothing
		}

		isAnswer = true;

		for (int k = 0; ALPHABET_NUM > k; k++)
		{
			alphabet[k] = false;
		}
	}

	std::cout << answer;

	return 0;
}