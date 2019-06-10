/*
File: contactbook.h
Description: Final Project
Author: Raymond Laughrey
Email: raymonl4963@student.vvc.edu
Date of Creation: 6/7/2019, 6:05:12 PM
*/
#ifndef CONTACTBOOK_H
#define CONTACTBOOK_H
#include <vector>
#include <iostream>
#include "contact.h"
class ContactBook {
private:
std::vector<Contact*> v;
public:
ContactBook();
void automatically_add_to_contact_book(const std::string& file);
void manually_add_to_contact_book();
std::string search_the_contact_book(const std::string& n) const;
void change_the_contact_book_name(const std::string& n, const std::string& new_name);
void change_the_contact_book_address(const std::string& n, const std::string& new_address);
void change_the_contact_book_phone(const std::string& n, const std::string& new_phone);
void change_the_contact_book_email(const std::string& n, const std::string& new_email);
void change_the_contact_book_website(const std::string& n, const std::string& new_website);
void save_the_contact_book();
void list_the_contact_book();
};
#endif
