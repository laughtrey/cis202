#include "addresslisting.h"

AddressListing::AddressListing(const std::string& name, const std::string& address)
{
	m_name = name;
	m_address = address;
}
void AddressListing::set_name(const std::string& name)
{
	m_name = name;
}
void AddressListing::set_address(const std::string& address)
{
	m_address = address;
}
std::string AddressListing::get_name() const
{
	return m_name;
}
std::string AddressListing::get_address() const
{
	return m_address;
}
