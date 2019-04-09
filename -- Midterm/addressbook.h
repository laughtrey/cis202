#ifndef ADDRESSBOOK_H
#define ADDRESSBOOK_H
#include <vector>
#include <iostream>
#include "addresslisting.h"
class AddressBook {
private:
std::vector<AddressListing*> v;
public:
  AddressBook();
  void automatically_add_to_address_book(const std::string& file);
  void manually_add_to_address_book();
  void search_the_address_book(const std::string& n) const;
  void change_the_address_book_name(const std::string& n, const std::string& new_name);
  void change_the_address_book_address(const std::string& n, const std::string& new_address);
  void save_the_address_book();
  void list_the_address_book();
};
#endif
