#ifndef LISTING_H
#define LISTING_H
#include<string>
class Listing {
private:
std::string m_name,m_number;

public:
  Listing (const std::string &name, const std::string &number);
  std::string get_name() const;
  std::string get_number() const;
};
#endif
