/*
   File: student.cpp
   Description: This is the student and grade class review.
   Author: Raymond Laughrey
   Email: raymonl4963@student.vvc.edu
   Date of Creation: 2/16/2019, 6:14:49 PM
 */
#include <string>
#include <iostream>
#include "student.h"
#include "grade.h"
/**
 * Class constructor
 */
Student::Student()
{
	m_name;
	m_total_score = 0;
	m_quizzes_taken_amount = 0;
}
/**
 * Class constructor with parameters
 * @param name  Name of student
 * @param score initial quiz score as an int
 */
Student::Student(std::string name, int score)
{
	m_name = name;
	int m_score = score;
	v.push_back(m_score);
}
/**
 * Returns the member name variable of the student
 * @return name of the student
 */
const std::string Student::get_name()
{
	return m_name;
}
/**
 * Adds a quiz to the students vector
 * @param score score of a quiz in numerical value
 */
void Student::add_quiz(int score)
{
	int m_score = score;

	v.push_back(m_score);
}
/**
 * Returns The sum of all quiz scores.
 * @return The tallied quiz score.
 */
int Student::get_total_score()
{
	for (size_t i = 0; i < v.size(); i++) {
		m_total_score += v[i];
	}
	return m_total_score;
}
/**
 * Averages the score of all quizzes added.
 * @return The average of quiz scores.
 */
const int Student::get_average_score()
{
	return (get_total_score() / v.size());
}
/**
 * Adds a string grade, ie A, B, C etc.
 * @param grade The entered grade as a string.
 */
void Student::add_grade(std::string grade)
{
  m_grade = grade;
  Grade temp(m_grade);
	g.push_back(temp);
}
/**
 * Prints the GPA of the student.
 */
void Student::print_letter_gpa()
{
	Grade print;
	std::cout << print.gpa_conversion(g) << '\n';
}
