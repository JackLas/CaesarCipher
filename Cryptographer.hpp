#ifndef CRYPTOGRAPHER_H
#define CRYPTOGRAPHER_H

#include <string>
typedef unsigned int uint;

class Cryptographer
{
private:
	std::string myAlphabet;
	int myKey;
public:
	Cryptographer(int key, std::string alphabet = "abcdefghijklmnopqrstuvwxyz");
	std::string code(std::string str);
	std::string decode(std::string str);
protected:
	int findIndex(char symbol);
	int calculateNewIndex(int index, bool isToDecode);
	std::string logic(std::string str, bool isToDecode);
};

#endif //CRYPTOGRAPHER_H