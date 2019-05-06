/*
File: safestack.h
Description: SafeStack 17.1 project.
Author: Raymond Laughrey
Email: raymonl4963@student.vvc.edu
Date of Creation: 5/3/2019, 12:21:19 AM
*/
#ifndef SAFESTACK_H
#define SAFESTACK_H
#include<iostream>
#include<string>
#include<stack>
class SafeStack {
private:
  std::stack<std::string> m_data;
public:
  SafeStack ();
  void push(const std::string& s);
  void pop();
  std::string top();
};
#endif
