/*
File: main.cpp
Description:
Author: Raymond Laughrey
Email: raymonl4963@student.vvc.edu
Date of Creation:
*/
#include<iostream>
#include<string>
#include "student.h"
#include "grade.h"

int main()
{
  Student Billy;
  Billy.add_quiz(45);
  Billy.add_quiz(66);
  Billy.add_quiz(75);
  Billy.add_quiz(94);
  std::cout << Billy.get_average_score() << '\n';
   return 0;
}
