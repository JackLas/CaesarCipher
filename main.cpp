#include "Input.hpp"
#include "Cryptographer.hpp"

int main() //demo
{
	Input input;
	Cryptographer cryptographer;

	std::cout << "Enter string to code: ";
	std::string str = input.getInputStringWithoutSpaces();
	int key;
	std::cout << "Enter key to code: ";
	std::cin >> key;

	str = cryptographer.code(str, key);
	std::cout << "Coded:\t " << str << std::endl;
	str = cryptographer.decode(str, key);
	std::cout << "Decoded: " << str << std::endl;
	return 0;
}