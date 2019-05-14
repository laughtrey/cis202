/**
   File: reptile.h
   Description: Derived Reptile class header.
   Author: Raymond Laughrey
   Email: raymonl4963@student.vvc.edu
   Date of Creation: 3/3/2019, 5:01:19 PM
 */
#ifndef REPTILE_H
#define REPTILE_H
#include <iostream>
#include <string>
#include "animal.h"
class Reptile : public Animal {
private:
public:
Reptile(const std::string &t);
std::string get_type();
};
#endif
