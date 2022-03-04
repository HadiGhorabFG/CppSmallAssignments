#include <iostream>
#include <string>

int main()
{
	int guessCount = 0;
	int correctNumber = 10;
	int currentGuess = -1;

	std::string inputValue;

	while(correctNumber != currentGuess)
	{
		guessCount++;
		std::cout << "Guess correct numbr between 0 and 10.." << std::endl;
		getline(std::cin, inputValue);
		currentGuess = std::stoi(inputValue);

		if (correctNumber != currentGuess)
			std::cout << "Wrong guess, try again.." << std::endl;
	}

	std::cout << "You guessed the correct number: " << correctNumber << std::endl;
	std::cout << "It took you " << guessCount << " guesses." << std::endl;

	return 0;
}