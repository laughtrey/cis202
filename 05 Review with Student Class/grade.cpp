/*
   File: grade.cpp
   Description: This is the student and grade class review.
   Author: Raymond Laughrey
   Email: raymonl4963@student.vvc.edu
   Date of Creation: 2/16/2019, 6:14:49 PM
 */
#include "grade.h"
/**
 * Class Constructor
 */
Grade::Grade ()
{
	m_letter_grade;
}
/**
 * Class Constuctor with parameter
 * @param letter_grade the input letter grade
 */
Grade::Grade(std::string letter_grade)
{
	m_letter_grade = letter_grade;
}
/**
 * Returns the member value of grade string.
 * @return member value letter grade
 */
std::string Grade::get_grade()
{
	return m_letter_grade;
}
/**
 * Converts the vector of grades into a GPA
 * @param  v A vector of grades to be averaged into GPA
 * @param grade_total The sum of grades in the vector.
 * @return   The averaged GPA
 */
int Grade::gpa_conversion(std::vector<Grade> v)
{
  int grade_total = 0;
	for (size_t i = 0; i < v.size(); i++)
  {
		if (v[i].get_grade() == "A") {
			grade_total += 4;
		} else if (v[i].get_grade() == "B") {
			grade_total += 3;
		} else if (v[i].get_grade() == "C") {
			grade_total += 2;
		} else if (v[i].get_grade() == "D") {
			grade_total += 1;
		} else if (v[i].get_grade() == "F") {
			grade_total += 0;
		}
	}
  	return grade_total / v.size();
}
