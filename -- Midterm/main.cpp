/*
   File: main.cpp
   Description:
   Author:
   Email:
 */
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include "addresslisting.h"
#include "addressbook.h"


int main(int argc, char const *argv[])
{
	AddressBook MyBook;

	if (argc > 1) {
		std::string filename = argv[1];
		MyBook.automatically_add_to_address_book(filename);
	}
	bool menu = true;
	while (menu == true) {
		std::cout
			<<  "Welcome to your address book. Please make a selection: " << '\n'
			<<  "1) Add an entry to the address book" << '\n'
			<<  "2) Search the address book" << '\n'
			<<  "3) Change an entry in the address book" << '\n'
			<<  "4) Save your address book to file" << '\n'
			<<  "5) Exit" << '\n';
		int answer;
		std::cin >> answer;

		if (answer == 1) {
			MyBook.manually_add_to_address_book();
		}else if (answer == 2) {
			std::cout << "Who would you like to search for?" << '\n';
			std::string name;
			std::cin.ignore();
			std::getline(std::cin, name);
			MyBook.search_the_address_book(name);
		}else if (answer == 3) {
			std::cout << "Whose name or address would you like to change?" << '\n';
			std::string name;
			std::cin.ignore();
			std::getline(std::cin, name);
			std::cout << "Would you like to change their (1)name or (2)address?" << '\n';
			int answer;
			std::cin >> answer;
			if (answer == 1) {
				std::cout << "What do you want to change their name to?" << '\n';
				std::string new_name;
				std::cin.ignore();
				std::getline(std::cin, new_name);
				MyBook.change_the_address_book_name(name, new_name);
			}else if (answer == 2) {
				std::cout << "What do you want to change their address to?" << '\n';
				std::string new_address;
				std::cin.ignore();
				std::getline(std::cin, new_address);
				MyBook.change_the_address_book_address(name, new_address);
			}
		}else if (answer == 4) {
			MyBook.save_the_address_book();
		}else {
			menu = false;
		}
	}
	return 0;
}
