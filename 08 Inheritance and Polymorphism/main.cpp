/**
   File: main.cpp
   Description: This is the base class/derived class zoo animal eating project.
   Author: Raymond Laughrey
   Email: raymonl4963@student.vvc.edu
   Date of Creation: 3/3/2019, 5:01:19 PM
 */
#include <iostream>
#include <vector>
#include "animal.h"
#include "reptile.h"
#include "insect.h"
#include "mammal.h"

int main()
{
	std::vector<Animal*> zoo;
	zoo.push_back(new Reptile("Reptile"));
	zoo.push_back(new Insect("Insect"));
	zoo.push_back(new Mammal("Mammal"));

	for (size_t i = 0; i < zoo.size(); i++) {
		zoo[i]->eat();
	}

	return 0;
}
