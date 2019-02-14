class Student
{
private:
  int m_score, m_quiz_taken_total;
  std::string m_name;

public:
  Student();
  Student(std::string name, int score);
  get_name();
  add_quiz(int score);
  get_total_score();
  get_average_score();
};

Student::Student()
{
  std::string m_name;
  int m_score;
  int m_quiz_taken_total;
}
Student::Student(std::string name, int score)
{
  std::string m_name = name;
  int m_score = score;
}
Student::get_name()
 {
   return m_name;
 }
 Student::add_quiz(int score)
 {
   int m_score = score;
 }
 Student::get_total_score()
 {
   //return m_total_score;
   return 0;
 }
 Student::get_average_score()
 {
   return 0;
   /*
   return [quiz_score_total / quiz_taken_total];
   */
 }
