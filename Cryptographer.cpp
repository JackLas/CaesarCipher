#include "Cryptographer.hpp"

Cryptographer::Cryptographer(int key, std::string alphabet):
myAlphabet(alphabet)
{
	myKey = key % alphabet.length();
}

std::string Cryptographer::logic(std::string str, bool isToDecode)
{
	for(uint i = 0; i < str.length(); ++i)
	{
		int curIndex;
		if((curIndex = findIndex(str[i])) != -1)
			str[i] = myAlphabet[calculateNewIndex(curIndex, isToDecode)];
		else
			str[i] = '_';
	}
	return str;
}

int Cryptographer::findIndex(char symbol)
{
	for(uint i = 0; i < myAlphabet.length(); ++i)
	{
		if(myAlphabet[i] == symbol)
			return (int)i;
	}
	return -1;
}

int Cryptographer::calculateNewIndex(int index, bool isToDecode)
{
	if(isToDecode)
		index = (index + (myAlphabet.length()-myKey)) % myAlphabet.length();
	else index = (index + myKey) % myAlphabet.length();

	return index;
}

std::string Cryptographer::code(std::string str)
{
	return logic(str, false);
}

std::string Cryptographer::decode(std::string str)
{
	return logic(str, true);
}