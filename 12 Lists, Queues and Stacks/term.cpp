#include <string>
#include <iostream>
#include "term.h"
Term::Term (int coefficient, int power)
{
  m_coefficient = coefficient;
  m_power = power;
}
int Term::get_coefficient() const
{
  return m_coefficient;
}
int Term::get_power() const
{
  return m_power;
}
std::string Term::print_term() const
{
    std::string term = "";
    if (get_coefficient() == 1 && get_power() == 0) {
      term = "1";
    }
    if (get_coefficient() == 1 && get_power() > 1) {
      term += "x^" + std::to_string(get_power());
    }
    else if (get_coefficient() > 1 && get_power() > 1) {
      term += std::to_string(get_coefficient()) + "x^" + std::to_string(get_power());
    }
    else if (get_power() == 1) {
      term += "x";
    }
    else if (get_power() > 1) {
      term += "x^" + std::to_string(get_power());
    }
    return term;
}
