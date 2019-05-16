#ifndef SPLITSTRING_H
#define SPLITSTRING_H
#include <vector>
#include <string>
#include <iostream>


class splitstring : public std::string {
private:
std::vector<std::string> flds;

public:
splitstring(const char *s) : std::string(s)
{
};
splitstring(const std::string& s) : std::string(s)
{
};
std::vector<std::string>& split(char delim, int rep = 0);
};
#endif
