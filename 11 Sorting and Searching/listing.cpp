#include"listing.h"
Listing::Listing(const std::string &name,const std::string &number){
  m_name = name;
  m_number = number;
}
std::string Listing::get_name() const{
  return m_name;
}
std::string Listing::get_number() const{
  return m_number;
}
