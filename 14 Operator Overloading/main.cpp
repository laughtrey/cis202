/*
File: main.cpp
Description:
Author: Raymond Laughrey
Email: raymonl4963@student.vvc.edu
Date of Creation:
*/
#include<iostream>
#include<string>
#include<algorithm>
#include "biginteger.h"

int main()
{
  std::string s = "943499";
  std::string t = "12345";
  BigInteger a(s);
  BigInteger b(t);
  std::cout << "A:" << '\n';
  a.list_int_vector();
  std::cout << "---" << '\n';
  std::cout << "B:" << '\n';
  b.list_int_vector();
  std::cout << "---" << '\n';
  return 0;
}
