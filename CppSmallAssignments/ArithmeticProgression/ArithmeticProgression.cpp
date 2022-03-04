#include <iostream>

bool CheckArithmetic(int* number, int arrLength)
{
	int initialDifference = number[0] - number[1];

	for (size_t i = 0; i < arrLength - 1; i++)
	{
		if ((number[i] - number[i + 1]) != initialDifference)
		{
			return false;
		}
	}
	
	return true;
}

int main()
{
	int numbers[] = { 2, 4, 6, 8, 10 };
	int sizeOfArray = sizeof(numbers) / sizeof(numbers[0]);

	for (int number : numbers)
	{
		std::cout << number << " ";
	}
	std::cout << std::endl;

	if (CheckArithmetic(numbers, sizeOfArray))
	{
		std::cout << "Numbers have arithmetic progression." << std::endl;
	}
	else
	{
		std::cout << "Numbers do not have arithmetic progression." << std::endl;
	}

	return 0;
}