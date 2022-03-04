#include <iostream>

int AbsoluteDiff(int a, int b)
{
	return abs(a - b);
}


int main()
{
	int absDiff = AbsoluteDiff(-6, 4);

	std::cout << absDiff << std::endl;

	return 0;
}