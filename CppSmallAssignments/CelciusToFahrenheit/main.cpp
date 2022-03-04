#include <iostream>

float CelsiusToFahrenheit(float celsius)
{
	// Must be float to be able to return a float value for fahrenheit, otherwise it will ignore decimals (answer to question in booklet).
	return ((celsius * 9) / 5) + 32;
}

int main()
{
	float celsius = 36.0f;
	
	std::cout << celsius << " celsius equals " <<  CelsiusToFahrenheit(celsius) << " fahrenheit." << std::endl;

	return 0;
}