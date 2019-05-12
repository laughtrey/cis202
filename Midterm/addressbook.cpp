#include <vector>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include "addresslisting.h"
#include "addressbook.h"

AddressBook::AddressBook()
{
	v;
}
void AddressBook::automatically_add_to_address_book(const std::string& file)
{
	std::ifstream input(file, std::ios::in);
	if (input.is_open()) {
		std::string name, address;
		while (std::getline(input, name) && std::getline(input, address)) {
			v.push_back(new AddressListing(name, address));
		}
		input.close();
	}
}
void AddressBook::manually_add_to_address_book()
{
	std::string name, address;
	std::cout << "Please enter name: " << '\n';
	std::cin.ignore();
	std::getline(std::cin, name);
	std::cout << "Please enter address: " << '\n';
	std::cin.clear();
	std::getline(std::cin, address);
	AddressListing *a = new AddressListing(name, address);
	v.push_back(a);
	std::cin.clear();
}
void AddressBook::search_the_address_book(const std::string& n) const
{
	for (auto entries : v) {
		if (n == entries->get_name()) {
			std::cout << entries->get_name() << " lives at: " << entries->get_address() << '\n';
		}
		// else  {
		//      std::cout << "Sorry, I couldn't find anyone by that name" << '\n';
		// }
	}
}
void AddressBook::change_the_address_book_name(const std::string& n, const std::string& new_name)
{
	for (auto entries : v) {
		if (entries->get_name() == n) {
			entries->set_name(new_name);
		}else {
			std::cout << "Sorry, I couldn't find that person in the address book. Make sure you entered their name correctly." << '\n';
		}
	}
}
void AddressBook::change_the_address_book_address(const std::string& n, const std::string& new_address)
{
	for (auto entries : v) {
		if (entries->get_name() == n) {
			entries->set_address(new_address);
		}else {
			std::cout << "Sorry, I couldn't find that person in the address book. Make sure you entered their name correctly." << '\n';
		}
	}
}
void AddressBook::save_the_address_book()
{
	std::ofstream bookfile("./data/addressbook.txt", std::ios::out);
	if (bookfile.is_open()) {
		bookfile << "==My Address Book== " << '\n';
		for (auto entries : v) {
			bookfile << entries->get_name() << '\n' << entries->get_address() << '\n';
		}
		bookfile.close();
	}
}
void AddressBook::list_the_address_book()
{
	for (auto names : v)
		std::cout << names->get_name() << '\n';
}
