#include <list>
#include <iostream>
#include <string>
int main()
{
  std::list<std::string> the_list;

  the_list.push_back("hello");
  the_list.push_back("to");
  the_list.push_back("the");
  the_list.push_back("world");
  //std::list<std::string>::iterator it = the_list.begin();

  // for(it = the_list.begin(); it != the_list.end();it++)
  // std::cout << *it << '\n';

  for(auto words : the_list) // auto figures out the data type // im a little scared
  std::cout << words << '\n';
  return 0;
}
