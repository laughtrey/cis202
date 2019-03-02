#include "animal.h"
Animal::Animal()
{

}
Animal::Animal(const std::string &t)
{
  m_type_of_animal = t;
}
std::string Animal::get_type()
{
  return m_type_of_animal;
}
void Animal::set_type(const std::string &t)
{

  m_type_of_animal = t;
}
void Animal::eat()
{
  std::cout << m_type_of_animal << " eats." << '\n';
}
