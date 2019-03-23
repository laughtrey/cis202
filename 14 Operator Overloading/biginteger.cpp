#include <iostream>
#include <vector>
#include <string>
#include "biginteger.h"
BigInteger::BigInteger()
{
  m_v;
}
BigInteger::BigInteger(const std::string &nu)
{
  for (size_t i = 0; i < nu.size(); i++) {
	  char c = nu.at(i);
	  int j = c - '0';
	  m_v.push_back(j);
  }
}
std::vector<int> BigInteger::get_int_vector()
{
    return m_v;
}
void BigInteger::list_int_vector()
{
  for (size_t i = 0; i < m_v.size(); i++) {
    std::cout << m_v[i] << '\n';
  }
}

BigInteger operator+(const BigInteger& a, const BigInteger& b)
{

}
BigInteger operator-(const BigInteger& a, const BigInteger& b)
{

}
BigInteger operator*(const BigInteger& a, const BigInteger& b)
{

}
std::ostream& operator<<(std::ostream& out, const BigInteger& b)
{
  //out << //added OR subtracted OR multiplied integers from the vector
  return out;
}
