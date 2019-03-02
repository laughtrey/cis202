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
