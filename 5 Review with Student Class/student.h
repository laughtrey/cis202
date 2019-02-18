#ifndef STUDENT
#define STUDENT
#include<iostream>
#include<string>
class Student
{
private:
  int m_score_total, m_quiz_taken_total;
  std::string m_name, m_grade;

public:
  Student();
  Student(std::string name, int score);
  std::string get_name();
  void add_quiz(int score);
  int get_total_score();
  int get_average_score();
  void add_grade(std::string grade);
  int compute_gpa();
};
#endif
