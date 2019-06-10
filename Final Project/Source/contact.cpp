/*
File: contact.cpp
Description: Final Project
Author: Raymond Laughrey
Email: raymonl4963@student.vvc.edu
Date of Creation: 6/7/2019, 6:05:12 PM
*/
#include "contact.h"

Contact::Contact()
{

}
Contact::Contact(const std::string& name, const std::string& address, const std::string& phone, const std::string& email, const std::string& website)
{
	m_name = name;
	m_address = address;
	m_phone = phone;
	m_email = email;
	m_website = website;
}
void Contact::set_name(const std::string& name)
{
	m_name = name;
}
void Contact::set_address(const std::string& address)
{
	m_address = address;
}
void Contact::set_phone(const std::string& phone)
{
	m_phone = phone;
}
void Contact::set_email(const std::string& email)
{
	m_email = email;
}
void Contact::set_website(const std::string& website)
{
	m_website = website;
}
std::string Contact::get_name() const
{
	return m_name;
}
std::string Contact::get_address() const
{
	return m_address;
}
std::string Contact::get_phone() const
{
	return m_phone;
}
std::string Contact::get_email() const
{
	return m_email;
}
std::string Contact::get_website() const
{
	return m_website;
}
