#include "grade.h"
  Grade::Grade ()
  {

  }
  Grade::Grade(std::string m_letter_grade)
  {

  }
  int Grade::gpa_conversion(std::string letter_grade)
  {
    std::string letter = letter_grade;
    if (letter == "A")
    {
      m_GPA = 4;
    } else if (letter == "B")
    {
      m_GPA = 3;
    } else if (letter == "C")
    {
      m_GPA = 2;
    } else if (letter == "D")
    {
      m_GPA = 1;
    } else if (letter == "F")
    {
      m_GPA = 0;
    }
    return 0;
  }
