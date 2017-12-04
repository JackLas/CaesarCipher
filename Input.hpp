#ifndef INPUT_HPP
#define INPUT_HPP

#include <iostream>
#include <string>

class Input
{
private:
	std::string myStr;
public:
	void inputString();
	std::string getInputStringWithoutSpaces();
	std::string getInputString();
	int getInputKey();
protected:
	void removeSpaces();
};

#endif //INPUT_HPP