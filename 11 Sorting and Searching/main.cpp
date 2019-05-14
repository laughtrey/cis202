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
	TelephoneBook YellowPages(filename);
	bool menu = true;
	while (menu == true) {
		std::cout
			<<  "Telephone book: " << '\n'
			<<  "1) Search the Telephone book by name" << '\n'
			<<  "2) Search the Telephone book by number" << '\n'
			<<  "3) Exit" << '\n';
		int answer;
		std::cin >> answer;
		std::cin.ignore();
		if (answer == 1) {
			std::cout << "Please enter the full name of the person you would like to search for." << '\n';
			std::string name;
			std::getline(std::cin, name);
			std::cout << YellowPages.lookup_by_name(name) << '\n';
		} else if (answer == 2) {
			std::cout << "Please enter the number you would like to look up in format:" << '\n';
			std::cout << "###-###-####" << '\n';
			std::string number;
			std::getline(std::cin, number);
			std::cout << YellowPages.lookup_by_number(number) << '\n';
		} else {
			menu = false;
		}
	}
	// std::string str = "Viv Harry";
	// std::string str2 = "341-295-8420";
	// std::cout << YellowPages.lookup_by_name(str) << '\n';
	// std::cout << YellowPages.lookup_by_number(str2) << '\n';

	return 0;
}
