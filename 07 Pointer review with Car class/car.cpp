/*
   File: car.cpp
   Description: Car class implementations
   Author: Raymond Laughrey
   Email: raymonl4963@student.vvc.edu
   Date of Creation: 2/27/2019, 5:21:03 PM
 */
#include <iostream>
#include <string>
#include <vector>
#include "car.h"
#include "person.h"
/**
 * Class Constructor
 */
Car::Car()
{
	m_model;
	m_driver = NULL;
	m_owner = NULL;

}
/**
 * Class Constructor with parameters
 * @param m Model Name
 * @param d Driver
 * @param o Owner
 */
Car::Car(const std::string& m, Person* d, Person* o)
{
	set_model(m);
	set_driver(d);
	set_owner(o);
}
/**
 * Set the model of the car
 * @param m Model string
 */
void Car::set_model(const std::string& m)
{
	m_model = m;
}
/**
 * Set the driver of the car
 * @param d Pointer to Person driver
 */
void Car::set_driver(Person* d)
{
	m_driver = d;
}
/**
 * Set the owner of the car
 * @param o Pointer to the Person owner
 */
void Car::set_owner(Person* o)
{
	m_owner = o;
}
/**
 * Returns the model string
 * @return Car model string
 */
std::string Car::get_model()
{
	return m_model;
}
/**
 * Returns the Person Driver pointer
 * @return Driver pointer
 */
Person* Car::get_driver()
{
	return m_driver;
}
/**
 * Returns the Person Owner pointer
 * @return Owner pointer
 */
Person* Car::get_owner()
{
	return m_owner;
}
/**
 * Prints all the cars, their owners, and their drivers.
 * @param v Vector of stored Car pointers.
 */
void Car::print_cars(std::vector<Car*> &v)
{
	for (size_t i = 0; i < v.size(); i++) {
		std::cout << v[i]->get_model() << "'s owner is: " << v[i]->get_owner()->get_name() << '\n';
		std::cout << "The owner is: " << v[i]->get_owner()->get_age() << " years old." << '\n';
		std::cout << v[i]->get_model() << "'s driver is: " << v[i]->get_driver()->get_name() << '\n';
		std::cout << "The driver is: " << v[i]->get_driver()->get_age() << " years old." << '\n';
	}
}
