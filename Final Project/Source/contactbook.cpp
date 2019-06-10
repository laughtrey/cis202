/*
File: contactbook.cpp
Description: Final Project
Author: Raymond Laughrey
Email: raymonl4963@student.vvc.edu
Date of Creation: 6/7/2019, 6:05:12 PM
*/
#include <vector>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include "contact.h"
#include "contactbook.h"

ContactBook::ContactBook()
{

}
void ContactBook::automatically_add_to_contact_book(const std::string& file)
{
	std::ifstream input(file, std::ios::in);
	if (input.is_open()) {
		std::string name, address, phone, email, website;
		while (std::getline(input, name) && std::getline(input, address) && std::getline(input, phone) && std::getline(input, email) && std::getline(input, website)) {
			v.push_back(new Contact(name, address, phone, email, website));
		}
		input.close();
	}
}
void ContactBook::manually_add_to_contact_book()
{
	std::string name, address, phone, email, website;
	std::cout << "Please enter name: " << '\n';
	std::getline(std::cin, name);
	std::cout << "Please enter address: " << '\n';
	std::getline(std::cin, address);
	std::cout << "Please enter phone: " << '\n';
	std::getline(std::cin, phone);
	std::cout << "Please enter e-mail: " << '\n';
	std::getline(std::cin, email);
	std::cout << "Please enter website: " << '\n';
	std::getline(std::cin, website);
	Contact *a = new Contact(name, address, phone, email, website);
	v.push_back(a);
	std::cin.clear();
}
std::string ContactBook::search_the_contact_book(const std::string& n) const
{
	for (auto entries : v) {
		if (n == entries->get_name()) {
			std::string success = "Name: " 				+ entries->get_name()+'\n'+
			 											"Address: " 		+ entries->get_address()+'\n'+
														"Phone Number: "+ entries->get_phone()+'\n'+
														"Email: "				+ entries->get_email()+'\n'+
														"Website: " 		+ entries->get_website();
			return success;
		}
		else
		return "Sorry, I couldn't find anyone by that name.";
	}
	return "Sorry, I couldn't find anyone by that name.";
}
void ContactBook::change_the_contact_book_name(const std::string& n, const std::string& new_name)
{
	for (auto entries : v) {
		if (entries->get_name() == n) {
			entries->set_name(new_name);
		}else {
			std::cout << "Sorry, I couldn't find that person in the address book. Make sure you entered their name correctly." << '\n';
		}
	}
}
void ContactBook::change_the_contact_book_address(const std::string& n, const std::string& new_address)
{
	for (auto entries : v) {
		if (entries->get_name() == n) {
			entries->set_address(new_address);
		}else {
			std::cout << "Sorry, I couldn't find that person in the address book. Make sure you entered their name correctly." << '\n';
		}
	}
}
void ContactBook::change_the_contact_book_phone(const std::string& n, const std::string& new_phone)
{
	for (auto entries : v) {
		if (entries->get_name() == n) {
			entries->set_phone(new_phone);
		}else {
			std::cout << "Sorry, I couldn't find that person in the address book. Make sure you entered their name correctly." << '\n';
		}
	}
}
void ContactBook::change_the_contact_book_email(const std::string& n, const std::string& new_email)
{
	for (auto entries : v) {
		if (entries->get_name() == n) {
			entries->set_email(new_email);
		}else {
			std::cout << "Sorry, I couldn't find that person in the address book. Make sure you entered their name correctly." << '\n';
		}
	}
}
void ContactBook::change_the_contact_book_website(const std::string& n, const std::string& new_website)
{
	for (auto entries : v) {
		if (entries->get_name() == n) {
			entries->set_website(new_website);
		}else {
			std::cout << "Sorry, I couldn't find that person in the address book. Make sure you entered their name correctly." << '\n';
		}
	}
}
void ContactBook::save_the_contact_book()
{
	std::ofstream bookfile("./data/contactbook.txt", std::ios::out);
	if (bookfile.is_open()) {
		for (auto entries : v) {
			bookfile
			<< entries->get_name() << '\n'
			<< entries->get_address() << '\n'
			<< entries->get_phone() << '\n'
			<< entries->get_email() << '\n'
			<< entries->get_website() << '\n';
		}
		bookfile.close();
	}
}
void ContactBook::list_the_contact_book()
{
	for (auto names : v)
		std::cout << names->get_name() << '\n';
}
