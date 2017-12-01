#include "Input.hpp"

std::string Input::inputString()
{
	myStr.clear();
	std::getline(std::cin, myStr);
}

void removeSpaces()
{
	for(auto symbol = myStr.begin(); symbol != myStr.end();)
	{
		if(*symbol == ' ') //symbol == 'space';
			symbol = myStr.erase(symbol);
		else ++symbol;
	}
}

std::string Input::getInputStringWithoutSpaces()
{
	inputString();
	removeSpaces();
	return myStr;
}