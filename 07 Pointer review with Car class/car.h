/*
   File: car.h
   Description: Car class definitions.
   Author: Raymond Laughrey
   Email: raymonl4963@student.vvc.edu
   Date of Creation: 2/27/2019, 5:21:03 PM
 */
#ifndef CAR_H
#define CAR_H

#include "person.h"
#include <string>
class Car
{
private:
std::string m_model;
Person* m_driver;
Person* m_owner;



public:
Car();
Car(const std::string& m, Person* d, Person* o);
void set_model(const std::string& m);
void set_driver(Person* d);
void set_owner(Person* o);
std::string get_model();
Person* get_driver();
Person* get_owner();
void print_cars(std::vector<Car*> &v);
};
#endif
