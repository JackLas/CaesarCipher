#include "Input.hpp"

int Input::getInputKey()
{
	int key;
	std::cin >> key;
	return key;
}

void Input::inputString()
{
	myStr.clear();
	std::getline(std::cin, myStr);
}

std::string Input::getInputString()
{
	return myStr;
}

void Input::removeSpaces()
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