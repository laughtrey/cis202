/*
   File: person.cpp
   Description: Person class implementations
   Author: Raymond Laughrey
   Email: raymonl4963@student.vvc.edu
   Date of Creation: 2/27/2019, 5:21:03 PM
 */
#include <iostream>
#include <string>
#include "person.h"
/**
 * Class constructor
 */
Person::Person()
{
	m_name;
	m_age = 0;
}
/**
 * Class constructor with parameters
 * @param n Name
 * @param a Age
 */
Person::Person(const std::string& n, const int& a)
{
	set_name(n);
	set_age(a);
}
/**
 * Sets the Persons name
 * @param n Name
 */
void Person::set_name(const std::string& n)
{
	m_name = n;
}
/**
 * Sets the Persons age
 * @param a Age
 */
void Person::set_age(const int& a)
{
	m_age = a;
}
/**
 * Returns the Persons name
 * @return member Name
 */
std::string Person::get_name()
{
	return m_name;
}
/**
 * Reutnrs the Persons age
 * @return member Age
 */
int Person::get_age()
{
	return m_age;
}
/**
 * Manipulates the age, either increasing or reducing it
 * @param a The increase or decrease in age.
 */
void Person::manipulate_age(const int &a)
{
	m_age += a;
}
/**
 * Increases the Vector of Persons age by 1
 * @param v Vector of stored Person pointers.
 */
void Person::increase_age(std::vector<Person*> &v)
{
	for (size_t i = 0; i < v.size(); i++) {
		v[i]->manipulate_age(+1);
	}
}
