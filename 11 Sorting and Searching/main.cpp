/*
   File: main.cpp
   Description:
   Author: Raymond Laughrey
   Email: raymonl4963@student.vvc.edu
   Date of Creation:
 */
#include <iostream>
#include <fstream>
#include <string>
#include "telephonebook.h"
#include "splitstring.h"

int main(int argc, char const *argv[])
{
	if (argc < 2) {                                                                                 // Check the number of parameters
		std::cerr << "Usage: " << argv[0] << " FILENAME of telephone book data" << std::endl;    // Tell the user how to run the program
		return 1;
	}
	std::string filename = argv[1];
	TelephoneBook create(filename);
	return 0;
}
