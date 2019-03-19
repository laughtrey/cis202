/**
   File: mammal.h
   Description: Derived Mammal class header.
   Author: Raymond Laughrey
   Email: raymonl4963@student.vvc.edu
   Date of Creation: 3/3/2019, 5:01:19 PM
 */
#ifndef MAMMAL_H
#define MAMMAL_H
#include <iostream>
#include <string>
#include "animal.h"
class Mammal : public Animal {
private:
public:
Mammal(const std::string &t);
std::string get_type();
};
#endif
