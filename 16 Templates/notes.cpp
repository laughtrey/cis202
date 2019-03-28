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


template<class T>void print_array(T ar[], int size)
{
  for (size_t i = 0; i < size; i++) {
    std::cout << ar[i] << ' ';
  }
  std::cout << '\n';
}
int main()
{
  int ar[5];
  ar[0] = 1;
  ar[1] = 2;
  ar[2] = 3;
  ar[3] = 4;
  ar[4] = 5;
  print_array(ar,5);

  char s[6];
  s[0] = 'H';
  s[1] = 'e';
  s[2] = 'l';
  s[3] = 'l';
  s[4] = 'o';
  s[5] = '\n';
  print_array(s,6);

//templates are one file, .hpp
  return 0;
}
