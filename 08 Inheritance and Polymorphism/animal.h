/**
   File: animal.h
   Description: Derived Animal class header.
   Author: Raymond Laughrey
   Email: raymonl4963@student.vvc.edu
   Date of Creation: 3/3/2019, 5:01:19 PM
 */
#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
#include <string>
class Animal {
private:
std::string m_type_of_animal;
protected:
int m_number_of_teeth = 0;
bool m_is_herbivore;
bool m_is_carnivore;
bool m_is_fluffy;
bool m_is_a_good_pet;
bool m_is_good_to_eat;
public:
Animal();
Animal(const std::string &t);
virtual void eat();
virtual std::string get_type();
void set_type(const std::string &t);
};
#endif
