/*
   File: telephonebook.h
   Description: Telephone lookup program
   Author: Raymond Laughrey
   Email: raymonl4963@student.vvc.edu
   Date of Creation: 5/13/2019, 12:38:35 AM
 */
#ifndef TELEPHONEBOOK_H
#define TELEPHONEBOOK_H
#include <vector>
#include <string>
#include <fstream>
#include "listing.h"
#include "splitstring.h"

class TelephoneBook {
private:
std::vector<Listing*> v;
public:
TelephoneBook(std::string filename);
void populate();
void print_telephone_book();
void sort_by_name();
void sort_by_number();
std::string lookup_by_name(const std::string &name);
std::string lookup_by_number(const std::string &number);
std::string search(const std::string &key);
int binary_search_name(const std::vector<Listing*> &v, int from, int to, const std::string &value);
int binary_search_number(const std::vector<Listing*> &v, int from, int to, const std::string &value);

};
#endif
