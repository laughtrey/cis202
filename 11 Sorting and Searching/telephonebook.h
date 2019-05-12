#ifndef TELEPHONEBOOK_H
#define TELEPHONEBOOK_H
#include<vector>
#include<string>
#include<fstream>
#include "listing.h"
#include "splitstring.h"

class TelephoneBook {
private:
std::vector<Listing*> v; //being careful. Can I sort a vector of pointers? Yes I can.
public:
  TelephoneBook(std::string filename);
  void populate();
  void print_telephone_book();
  void sort_by_name();
  void sort_by_number();
  std::string lookup_by_name(const std::string &name);
  std::string lookup_by_number(const std::string &number);
  std::string search(const std::string &key);
  std::string bsearch_by_name(const std::string &key,int low,int high);

};
#endif
