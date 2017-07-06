#include <iostream>
#include <fstream>

std::string targetString;
std::string typoString;
int problemInstances;

void readInputText()
{
	std::string tempTarget;
	std::string tempTypo;
	
	std::ifstream inputFile;
	inputFile.open("input.txt");
	
	if (inputFile.is_open())
	{
		inputFile >> problemInstances;
		inputFile.ignore();	// Ignore newline
		
		while (getline(inputFile, tempTarget))
		{
			getline(inputFile, tempTypo);
			
			inputFile.ignore();	// Ignore blank line
			
			targetString += tempTarget;
			typoString += tempTypo;
		}
		
		inputFile.close();
	}
}

int main (void)
{
	readInputText();
	
	std::cout << problemInstances << std::endl << targetString << std::endl << typoString;
	return 0;
}