#include "grade.h"
  Grade::Grade ()
  {
    m_GPA;
  }
  Grade::Grade(std::string m_letter_grade)
  {
    m_GPA = 0;
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
  int Grade::get_GPA_from_letter()
  {
    return m_GPA;
  }
