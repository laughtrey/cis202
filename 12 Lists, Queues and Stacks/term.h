#ifndef TERM_H
#define TERM_H
#include <iostream>
#include <string>
class Term {
private:
  int m_coefficient, m_power;

public:
  Term (int coefficient, int power);
  int get_coefficient() const;
  int get_power() const;
  std::string print_term() const;
};
#endif
