/*
   File: person.h
   Description: Person class definitions
   Author: Raymond Laughrey
   Email: raymonl4963@student.vvc.edu
   Date of Creation: 2/27/2019, 5:21:03 PM
 */
#ifndef PERSON_H
#define PERSON_H
#include<vector>
#include<string>
class Person
{
private:
std::string m_name;
int m_age;

public:
Person();
Person(const std::string& n, const int& a);
void set_name(const std::string& n);
void set_age(const int& a);
std::string get_name();
int get_age();
void manipulate_age(const int &a);
void increase_age(std::vector<Person*> &v);
};
#endif
