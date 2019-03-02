#include "reptile.h"
Reptile::Reptile(const std::string &t)
{
  m_type_of_animal = t;
}
std::string Reptile::get_type()
{
  return Animal::get_type();
}
