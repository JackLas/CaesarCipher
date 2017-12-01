#include "Cryptographer.hpp"

Cryptographer::Cryptographer(std::string alphabet)
{
	this->alphabet = alphabet;
}

std::string Cryptographer::code(std::string str, int key)
{
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

std::string Cryptographer::decode(std::string str, int key)
{
	return code(str, -key);
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
	if(key > 0)
		index = (index + key) % alphabet.length();

	if(key < 0)
		index = (index + (alphabet.length()+key)) % alphabet.length();
		
	return index;
}