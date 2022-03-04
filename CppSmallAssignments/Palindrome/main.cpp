#include <iostream>

bool palindrome(char* chars, int arraySize)
{
	for (size_t i = 0; i < arraySize; i++)
	{
		if (chars[i] != chars[(arraySize - 1) - i])
		{
			return false;
		}
	}

	return true;
}

int main()
{
	char words[] = {'e', 'y', 'e'};
	int wordsLength = sizeof(words);

	if (palindrome(words, wordsLength))
		std::cout << "Word is palindrome." << std::endl;
	else
		std::cout << "Word is not palindrome." << std::endl;

	return 0;
}