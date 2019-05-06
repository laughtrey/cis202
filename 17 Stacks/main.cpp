/*
File: main.cpp
Description: SafeStack 17.1 project.
Author: Raymond Laughrey
Email: raymonl4963@student.vvc.edu
Date of Creation: 5/3/2019, 12:21:19 AM
*/
#include<iostream>
#include<stack>
#include<string>
#include"safestack.h"
int main()
{
  SafeStack s;

try
{
  s.push("Hello");

  std::cout << s.top() << '\n';
  s.pop();
  s.pop(); //Error will occur here
}
catch(EmptyStackError& e)
{
  std::cerr << e.what() << '\n';
}
  return 0;
}
