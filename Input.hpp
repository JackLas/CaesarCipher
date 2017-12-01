#ifndef INPUT_HPP
#define INPUT_HPP

#include <iostream>
#include <string>

class Input
{
private:
	std::string myStr;
public:
	std::string inputString();
	std::string getInputStringWithoutSpaces();
protected:
	void removeSpaces();
};

#endif //INPUT_HPP