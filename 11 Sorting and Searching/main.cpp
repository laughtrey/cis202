/*
   File: main.cpp
   Description: Telephone lookup program
   Author: Raymond Laughrey
   Email: raymonl4963@student.vvc.edu
   Date of Creation: 5/13/2019, 12:38:35 AM
 */
#include <iostream>
#include <fstream>
#include <string>
#include "telephonebook.h"
#include "splitstring.h"

int main(int argc, char const *argv[])
{
	if (argc < 2) {                                                                                 // Check the number of parameters
		std::cerr << "Usage: " << argv[0] << " FILENAME of telephone book data" << std::endl;   // Tell the user how to run the program
		return 1;
	}
	std::string filename = argv[1];
	TelephoneBook GrandmasTelephoneBook(filename);
	std::string str = "Viv Harry";
	std::string str2 = "341-295-8420";
	std::cout << GrandmasTelephoneBook.lookup_by_name(str) << '\n';
	std::cout << GrandmasTelephoneBook.lookup_by_number(str2) << '\n';

	return 0;
}
