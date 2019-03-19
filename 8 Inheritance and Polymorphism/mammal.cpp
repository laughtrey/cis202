/**
   File: mammal.cpp
   Description: Derived Mammal class implementations.
   Author: Raymond Laughrey
   Email: raymonl4963@student.vvc.edu
   Date of Creation: 3/3/2019, 5:01:19 PM
 */
#include "mammal.h"
Mammal::Mammal(const std::string &t)
{
	m_type_of_animal = t;
}
std::string Mammal::get_type()
{
	return Animal::get_type();
}
