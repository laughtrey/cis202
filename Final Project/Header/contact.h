/*
File: contact.h
Description: Final Project
Author: Raymond Laughrey
Email: raymonl4963@student.vvc.edu
Date of Creation: 6/7/2019, 6:05:12 PM
*/
#ifndef CONTACT_H
#define CONTACT_H
#include <iostream>
#include <string>
class Contact {
private:
std::string m_name, m_address, m_phone, m_email, m_website;

public:
Contact();
Contact(const std::string& name, const std::string& address, const std::string& phone, const std::string& email, const std::string& website);
void set_name(const std::string& name);
void set_address(const std::string& address);
void set_phone(const std::string& phone);
void set_email(const std::string& email);
void set_website(const std::string& website);
std::string get_name() const;
std::string get_address() const;
std::string get_phone() const;
std::string get_email() const;
std::string get_website() const;
};
#endif
