#ifndef BIGINTEGER
#define BIGINTEGER
#include <iostream>
#include <vector>
class BigInteger {
private:
  std::vector<int> m_v;
public:
  BigInteger();
  BigInteger(const std::string &nu);
  std::vector<int> get_int_vector();
  void list_int_vector();
};
BigInteger operator+(const BigInteger& a, const BigInteger& b);
BigInteger operator-(const BigInteger& a, const BigInteger& b);
BigInteger operator*(const BigInteger& a, const BigInteger& b);
std::ostream& operator<<(std::ostream& out, const BigInteger& b);
#endif
