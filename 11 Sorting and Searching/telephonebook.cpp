/*
   File: telephonebook.cpp
   Description: Telephone lookup program
   Author: Raymond Laughrey
   Email: raymonl4963@student.vvc.edu
   Date of Creation: 5/13/2019, 12:38:35 AM
 */
#include "telephonebook.h"
#include <algorithm>
/**
 * Default TelephoneBook constructor
 * @param filename The input data in the form of a , delimited set of information
 */
TelephoneBook::TelephoneBook(std::string filename)
{
	std::ifstream file(filename.c_str());
	std::string line;
	int line_count = 0;
	while (std::getline(file, line)) {
		line_count++;
		splitstring input(line);
		std::vector<std::string> flds = input.split(',');//Expected: [0] id # discarded | [1] first name | [2] last name |[3] phone number
		std::string name = flds[1] + " " + flds[2];
		v.push_back(new Listing(name, flds[3]));
	}
}
/**
 * Print the Vector of listings for testing purposes.
 */
void TelephoneBook::print_telephone_book()
{
	for (Listing* names : v) {
		std::cout << names->get_name() << " " << names->get_number() << '\n';
	}
}
/**
 * Sort the vector of listings by name
 */
void TelephoneBook::sort_by_name()
{
	std::sort(v.begin(), v.end(), [](const Listing* a, const Listing* b) {          //This is a cool bit of C++11, instead of
		return a->get_name() < b->get_name();                                   //making another function, you do it with the lambda
	});
}
/**
 * Sort the vector of listings by telephone number
 */
void TelephoneBook::sort_by_number()
{
	std::sort(v.begin(), v.end(), [](const Listing* a, const Listing* b) {          //This is a cool bit of C++11, instead of
		return a->get_number() < b->get_number();                               //making another function, you do it with the lambda
	});
}
/**
 * Sorts the vector of listings by name, and then searches for the name and returns the phone number.
 * @param  name The input name.
 * @return      A string constructed with the name and number.
 */
std::string TelephoneBook::lookup_by_name(const std::string &name)
{
	sort_by_name();
	int result = binary_search_name(v, 0, v.size() - 1, name);
	return (v[result]->get_name() + "'s number is: " + v[result]->get_number());
}
/**
 * Sorts the vector of listings by number, and then searches for the number and returns the name.
 * @param  number The input number.
 * @return      A string constructed with the name and number.
 */
std::string TelephoneBook::lookup_by_number(const std::string &number)
{
	sort_by_number();
	int result = binary_search_number(v, 0, v.size() - 1, number);
	return ("The number " + v[result]->get_number() + " belongs to: " + v[result]->get_name());
}
/**
 * Binary search by name
 * @param  v     The vector of Listings
 * @param  from  The start of the search
 * @param  to    The end of the search
 * @param  value The inputted value being searched for
 * @return       The index position of the name in the vector of listings.
 */
int TelephoneBook::binary_search_name(const std::vector<Listing*> &v, int from, int to, const std::string &value)
{
	if (from > to)
		return -1;
	int mid = (from + to) / 2;
	if (v[mid]->get_name() == value)
		return mid;
	else if (v[mid]->get_name() < value)
		return binary_search_name(v, mid + 1, to, value);
	else
		return binary_search_name(v, from, mid - 1, value);
}
/**
 * Binary search by number
 * @param  v     The vector of Listings
 * @param  from  The start of the search
 * @param  to    The end of the search
 * @param  value The inputted value being searched for
 * @return       The index position of the number in the vector of listings.
 */
int TelephoneBook::binary_search_number(const std::vector<Listing*> &v, int from, int to, const std::string &value)
{
	if (from > to)
		return -1;
	int mid = (from + to) / 2;
	if (v[mid]->get_number() == value)
		return mid;
	else if (v[mid]->get_number() < value)
		return binary_search_number(v, mid + 1, to, value);
	else
		return binary_search_number(v, from, mid - 1, value);
}
