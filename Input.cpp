#include "Input.hpp"

std::string Input::getInputStringWithoutSpaces()
{
	std::string inputStr;
	std::getline(std::cin, inputStr);
	for(auto symbol = inputStr.begin(); symbol != inputStr.end();)
	{
		if(*symbol == ' ') //symbol == 'space';
			symbol = inputStr.erase(symbol);
		else ++symbol;
	}
	return inputStr;
}