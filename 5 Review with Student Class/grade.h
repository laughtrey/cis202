#ifndef GRADE
#define GRADE
#include<iostream>
#include<string>
class Grade
{
private:
  std::string m_letter_grade;
  int m_GPA;

public:
  Grade ();
  Grade(std::string m_letter_grade);
  int gpa_conversion(std::string letter_grade);
  int get_GPA_from_letter();
};
#endif
