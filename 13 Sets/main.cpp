/*
File: main.cpp
Description:
Author: Raymond Laughrey
Email: raymonl4963@student.vvc.edu
Date of Creation:
*/
#include<iostream>
#include<set>
void sieve_of_Eratosthenes(int n);
int main()
{
  int n = 100;
  //std::cout << sieve_of_Eratosthenes(n) << '\n';
  sieve_of_Eratosthenes(n);
  return 0;
}
void sieve_of_Eratosthenes(int n)
{
  std::set<int> sieve;
  std::set<int>::iterator pos;
  for (int i = 2; i <= n; i++) {
    sieve.insert(i);
  }
  for (pos = sieve.begin(); pos != sieve.end(); pos++){
    if (*pos % 2 || *pos % 3){
      sieve.erase(pos);
    }
  }
  for (pos = sieve.begin(); pos != sieve.end(); pos++) {
    std::cout << *pos << '\n';
  }
}
