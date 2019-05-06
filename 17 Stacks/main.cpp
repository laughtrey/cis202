/*
File: main.cpp
Description:
Author: Raymond Laughrey
Email: raymonl4963@student.vvc.edu
Date of Creation:
*/
#include<iostream>
#include<stack>
#include<string>

class EmptyStackError : public std::logic_error
{
public:
  EmptyStackError(const char *reason) : std::logic_error(reason){

  }
};

class SafeStack {
private:
  std::stack<std::string> m_data;
public:
  SafeStack ();
  void push(const std::string& s);
  void pop();
  std::string top();
};
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
