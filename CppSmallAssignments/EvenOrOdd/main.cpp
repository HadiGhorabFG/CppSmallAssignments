#include <iostream>

void CheckEvenOrOdd(const int& number)
{
	if (number % 2 == 0)
	{
		std::cout << "Number is even." << std::endl;
		return;
	}

	std::cout << "Number is odd." << std::endl;
}

int main()
{
	int number = 7;

	CheckEvenOrOdd(number);

	return 0;
}