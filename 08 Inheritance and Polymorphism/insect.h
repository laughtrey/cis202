/**
   File: insect.h
   Description: Derived Insect class header.
   Author: Raymond Laughrey
   Email: raymonl4963@student.vvc.edu
   Date of Creation: 3/3/2019, 5:01:19 PM
 */
#ifndef INSECT_H
#define INSECT_H
#include <iostream>
#include <string>
#include "animal.h"
class Insect : public Animal {
private:
public:
Insect(const std::string &t);
std::string get_type();
};
#endif
