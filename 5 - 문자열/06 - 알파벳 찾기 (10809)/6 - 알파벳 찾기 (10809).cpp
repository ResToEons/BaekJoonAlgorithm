#include <iostream>
#include <string>
#define ALPHABETNUM 26
int main()
{
	std::string word;
	int* letter = new int[ALPHABETNUM];
	std::cin >> word;

	for (int i = 0; ALPHABETNUM > i; i++)
	{
		letter[i] = -1;
	}

	for (int i = 0; word.length() > i; i++)
	{
		if (letter[word[i]-97] == -1)
			letter[word[i] - 97] = i;
		else
		{			
			// Do Nothing
		}
	}

	for (int i = 0; ALPHABETNUM > i; i++)
	{
		std::cout << letter[i] << " ";
	}

	return 0;
}