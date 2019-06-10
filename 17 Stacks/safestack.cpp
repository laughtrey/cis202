/*
File: safestack.cpp
Description: SafeStack 17.1 project.
Author: Raymond Laughrey
Email: raymonl4963@student.vvc.edu
Date of Creation: 5/3/2019, 12:21:19 AM
*/
#include "safestack.h"

SafeStack::SafeStack (){
  m_data;
}

void SafeStack::push(const std::string& s){
  m_data.push(s);
}

void SafeStack::pop(){
  if (m_data.size() < 0) {
    m_data.pop();
  }
  else throw EmptyStackError("Stack Underflow detected\n");
}

std::string SafeStack::top(){
  return m_data.top();
}
