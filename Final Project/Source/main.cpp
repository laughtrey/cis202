/*
File: main.cpp
Description: Final Project
Author: Raymond Laughrey
Email: raymonl4963@student.vvc.edu
Date of Creation: 6/7/2019, 6:05:12 PM
*/
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include "contact.h"
#include "contactbook.h"


int main(int argc, char const *argv[])
{
	ContactBook MyBook;

	if (argc > 1) {
		std::string filename = argv[1];
		MyBook.automatically_add_to_contact_book(filename);
	}
	bool menu = true;
	while (menu == true) {
		std::cout
			<<  "Welcome to your address book. Please make a selection: " << '\n'
			<<  "1) Add an entry to the address book" << '\n'
			<<  "2) Search the address book" << '\n'
			<<  "3) List the address book" << '\n'
			<<  "4) Change an entry in the address book" << '\n'
			<<  "5) Save your address book to file" << '\n'
			<<  "6) Exit" << '\n';
		int answer;
		std::cin >> answer;
		std::cin.ignore();

		if (answer == 1) {
			MyBook.manually_add_to_contact_book();
		}else if (answer == 2) {
			std::cout << "Who would you like to search for?" << '\n';
			std::string name;
			std::getline(std::cin, name);
			std::cout << MyBook.search_the_contact_book(name) << '\n';
		}else if (answer == 3) {
			MyBook.list_the_contact_book();
		}else if (answer == 4) {
			std::cout << "Whose name or address would you like to change?" << '\n';
			std::string name;
			std::getline(std::cin, name);
			std::cout << "What would you like to change?" << '\n' <<
			 							"1) Name\n" <<
										"2) Address\n"<<
										"3) E-Mail\n"<<
										"4) Website\n";

			int answer;
			std::cin >> answer;
			std::cin.ignore();
			if (answer == 1) {
				std::cout << "What do you want to change their name to?" << '\n';
				std::string new_name;
				std::getline(std::cin, new_name);
				MyBook.change_the_contact_book_name(name, new_name);
			}else if (answer == 2) {
				std::cout << "What do you want to change their address to?" << '\n';
				std::string new_address;
				std::getline(std::cin, new_address);
				MyBook.change_the_contact_book_address(name, new_address);
			}
		}else if (answer == 5) {
			MyBook.save_the_contact_book();
		}else {
			menu = false;
		}
	}
	return 0;
}
