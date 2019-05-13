/*
   File: listing.cpp
   Description: Telephone lookup program
   Author: Raymond Laughrey
   Email: raymonl4963@student.vvc.edu
   Date of Creation: 5/13/2019, 12:38:35 AM
 */
#include "listing.h"
/**
 * Constructs a listing of a persons name and telephone number
 * @param name   The input name
 * @param number The input number
 */
Listing::Listing(const std::string &name, const std::string &number)
{
	m_name = name;
	m_number = number;
}
/**
 * Returns the listing name
 * @return Member data name
 */
std::string Listing::get_name() const
{
	return m_name;
}
/**
 * Returns the listing number
 * @return Member data number
 */
std::string Listing::get_number() const
{
	return m_number;
}
