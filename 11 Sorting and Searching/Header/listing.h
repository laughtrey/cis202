/*
   File: listing.h
   Description: Telephone lookup program
   Author: Raymond Laughrey
   Email: raymonl4963@student.vvc.edu
   Date of Creation: 5/13/2019, 12:38:35 AM
 */
#ifndef LISTING_H
#define LISTING_H
#include <string>
class Listing {
private:
std::string m_name, m_number;

public:
Listing (const std::string &name, const std::string &number);
std::string get_name() const;
std::string get_number() const;
};
#endif
