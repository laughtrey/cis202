/*
   File: main.cpp
   Description: Implement a class Person with two fields name and age, and a class Car with three fields;
   the model, a pointer to the owner (a Person*), a pointer to the driver (also a Person*).
   Write a program that prompts the user to specify people and cars.  Store them in a  vector<Person*> and a
   vector<Car*>. Traverse the vector of Person objects and increment their ages by one year. Finally, traverse the
   vector of cars and print out the car model, owner's name and age, and the driver's name and age.
   Author: Raymond Laughrey
   Email: raymonl4963@student.vvc.edu
   Date of Creation: 2/27/2019, 5:21:03 PM
 */
#include <iostream>
#include <string>
#include <vector>
#include "person.h"
#include "car.h"

int main()
{
	Person a;
	Car b;

	std::vector<Person*> people;
	std::vector<Car*> cars;
	int MAX_CARS = 2; //Can make as many cars and drivers as possible here.
	for (size_t i = 0; i < MAX_CARS; i++) {
		std::string model_name;
		std::string owner_name;
		std::string driver_name;
		int owner_age = 0;
		int driver_age = 0;
		std::cout << "What kind of car do we have?" << '\n'; //I really want to use getline(); here but it doesn't work, even with cin.clear() and cin.ignore()
		std::cin >> model_name;
		std::cout << "Who's the owner?" << '\n';
		std::cin >> owner_name;
		std::cout << "How old is the owner?" << '\n';
		std::cin >> owner_age;
		std::cout << "Who's the driver?" << '\n';
		std::cin >> driver_name;
		std::cout << "How old is the driver?" << '\n';
		std::cin >> driver_age;
		Person* owner = new Person(owner_name, owner_age);      //Creates the owner
		Person* driver = new Person(driver_name, driver_age);   //Creates the driver
		people.push_back(owner);                                //Pushes the owner back onto the people vector
		people.push_back(driver);                               //Pushes the driver back onto the people vector
		Car* created_car = new Car(model_name, driver, owner);
		cars.push_back(created_car);
	}
	a.increase_age(people);
	b.print_cars(cars);

	return 0;
}
