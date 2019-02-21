#ifndef STUDENT
#define STUDENT
#include<iostream>
#include<string>
#include<vector>
class Student
{
private:
  int m_total_score,m_quizzes_taken_amount;
  std::string m_name, m_grade;
  std::vector<int> v;

public:
  Student();
  Student(std::string name, int score);
  const std::string get_name();
  void add_quiz(int score);
  int get_total_score();
  const int get_average_score();
  void add_grade(std::string grade);
};
#endif
