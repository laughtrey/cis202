#ifndef ADDRESSLISTING_H
#define ADDRESSLISTING_H
#include <iostream>
#include <string>
class AddressListing {
private:
std::string m_name, m_address;

public:
AddressListing(const std::string& name, const std::string& address);
void set_name(const std::string& name);
void set_address(const std::string& address);
std::string get_name() const;
std::string get_address() const;
};
#endif
