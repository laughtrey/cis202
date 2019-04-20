/*
   File: main.cpp
   Description:
   Author: Raymond Laughrey
   Email: raymonl4963@student.vvc.edu
   Date of Creation:
 */
#include <iostream>
#include <set>
#include <cmath>
void sieve_of_Eratosthenes(int n);
int main()
{
  int n;
  std::cout << "Up to what number do you want to know all prime numbers?" << '\n';
  std::cin >> n;
	sieve_of_Eratosthenes(n);
	return 0;
}
void sieve_of_Eratosthenes(int n)
{
	std::set<int> sieve;
	std::set<int>::iterator pos = sieve.begin();
	for (int i = 2; i <= n; i++) {
		sieve.insert(i);
		if (pos != sieve.end())
			pos++;
	}
	pos = sieve.begin();
	while (pos != sieve.end()) {
		int current = *pos++;
		int remove = current + current;
		while (remove <= n) {
			sieve.erase(remove);
			remove += current;
		}
	}
	pos = sieve.begin();
	while (pos != sieve.end()) {
		std::cout << *pos << '\n';
		pos++;
	}
std::cout << '\n';
}
