#include <string>
#include <iostream>
#include "student.h"
Student::Student()
{
  std::string m_name;
  int m_score_total;
  int m_quiz_taken_total;
}
Student::Student(std::string name, int score)
{
  std::string m_name = name;
  int m_score_total = score;
}
 std::string Student::get_name()
 {
   return m_name;
 }
 void Student::add_quiz(int score)
 {
   int m_score = score;
 }
 int Student::get_total_score()
 {
   //return m_total_score;
   return 0;
 }
 int Student::get_average_score()
 {
   return 0;
   /*
   return [m_score_total / quiz_taken_total];
   */
 }
 void add_grade(std::string grade)
 {
   std::string m_grade = grade;
 }
 int Student::compute_gpa()
 {
   return 0;
 }
