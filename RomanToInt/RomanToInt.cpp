#include <iostream>
#include <string>
#include "RomToInt.h"

RomToInt translator;

bool test(std::string in, int out)
{
	if (translator.romanToInt(in) == out)
	{
		std::cout << "Passed!" << std::endl;
		return true;
	}
	else
	{
		std::cout << std::endl;
		std::cout << "Error!" << std::endl;
		std::cout << "Input: " << in << std::endl;
		std::cout << "Output: " << out << std::endl;
		std::cout << std::endl;
	}
	return false;
}

int main()
{
	test("III", 3);
	test("LVIII", 58);
	test("MCMXCIV", 1994);
	test("MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMDCXXXIV", 48634);
	test("CDXV", 415);
	test("MDXXVIII", 1528);
	test("MMMMMMMMXXXIV", 8034);
	test("MCLXXII", 1172);



}