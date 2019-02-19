#include <string>
#include <iostream>
#include "student.h"
Student::Student()
{
  m_name;
  m_total_score;
  m_quizzes_taken_amount = 0;
}
Student::Student(std::string name, int score)
{
  m_name = name;
  m_total_score = score;
  m_quizzes_taken_amount = 1;
}
 std::string Student::get_name()
 {
   return m_name;
 }
 void Student::add_quiz(int score)
 {
   m_total_score += score;
   m_quizzes_taken_amount++;
 }
 int Student::get_total_score()
 {
   return m_total_score;
 }
 int Student::get_average_score()
 {
   return (m_total_score / m_quizzes_taken_amount);
 }
 void Student::add_grade(std::string grade)
 {
   m_grade = grade;
 }
 int Student::compute_gpa()
 {
   return 0;
 }
