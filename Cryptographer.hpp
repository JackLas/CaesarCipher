#ifndef CRYPTOGRAPHER_H
#define CRYPTOGRAPHER_H

#include <string>
typedef unsigned int uint;

class Cryptographer
{
private:
	std::string alphabet;
public:
	std::string code(std::string str, int key, std::string alphabet = "abcdefghijklmnopqrstuvwxyz");
	std::string decode(std::string str, int key, std::string alphabet = "abcdefghijklmnopqrstuvwxyz");
protected:
	int findIndex(char symbol);
	int calculateCodedIndex(int index, int key);
};

#endif //CRYPTOGRAPHER_H