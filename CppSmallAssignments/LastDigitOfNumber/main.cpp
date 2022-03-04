#include <iostream>

int LastDigitInNumber(const int& digits)
{
	return digits % 10;
}

int main()
{
	int number = 137;

	std::cout << LastDigitInNumber(number) << std::endl;

	return 0;
}