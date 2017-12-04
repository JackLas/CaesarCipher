#include "Input.hpp"
#include "Cryptographer.hpp"

int main() //demo
{
	Input input;
	std::cout << "Enter string to code: ";
	std::string str = input.getInputStringWithoutSpaces();
	std::cout << "Enter key to code: ";
	int key = input.getInputKey();

	Cryptographer cryptographer(key);
	str = cryptographer.code(str);
	std::cout << "Coded:\t " << str << std::endl;
	str = cryptographer.decode(str);
	std::cout << "Decoded: " << str << std::endl;
	return 0;
}