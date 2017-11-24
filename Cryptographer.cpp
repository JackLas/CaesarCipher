#include "Cryptographer.hpp"

std::string Cryptographer::code(std::string str, int key, std::string alphabet)
{
	this->alphabet = alphabet;
	for(uint i = 0; i < str.length(); ++i)
	{
		int index;
		if((index = findIndex(str[i])) != -1)
			str[i] = alphabet[calculateCodedIndex(index, key)];
		else
			str[i] = '_';
	}
	return str;
}

std::string Cryptographer::decode(std::string str, int key, std::string alphabet)
{
	return code(str, -key, alphabet);
}

int Cryptographer::findIndex(char symbol)
{
	for(uint i = 0; i < alphabet.length(); ++i)
	{
		if(alphabet[i] == symbol)
			return (int)i;
	}
	return -1;
}

int Cryptographer::calculateCodedIndex(int index, int key)
{
	index += key;

	if(key > 0)
		while(index >= alphabet.length())
			index -= alphabet.length();

	if(key < 0)
		while(index < 0)
			index += alphabet.length();
		
	return index;
}