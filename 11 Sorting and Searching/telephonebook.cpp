#include "telephonebook.h"
#include <algorithm>
TelephoneBook::TelephoneBook(std::string filename)
{
	std::ifstream file(filename.c_str());
	std::string line;
	int line_count = 0;
	while (std::getline(file, line)) {
		line_count++;
		splitstring input(line);
		std::vector<std::string> flds = input.split(',');//Expected: [0] id # discarded | [1] first name | [2] last name |[3] phone number
		std::string name = flds[1] + " " + flds[2];
		v.push_back(new Listing(name, flds[3]));
	}
}
void TelephoneBook::print_telephone_book()
{
	for (Listing* names : v) {
		std::cout << names->get_name() << " " << names->get_number() << '\n';
	}
}
void TelephoneBook::sort_by_name(){
	std::sort(v.begin(), v.end(), [](const Listing* a, const Listing* b) {   //This is a cool bit of C++11, instead of
		return a->get_name() < b->get_name();                           			//making another function, you do it with the lambda
	});
}
void TelephoneBook::sort_by_number(){
	std::sort(v.begin(), v.end(), [](const Listing* a, const Listing* b) {   //This is a cool bit of C++11, instead of
		return a->get_number() < b->get_number();                           			//making another function, you do it with the lambda
	});
}
std::string TelephoneBook::lookup_by_name(const std::string &name){
	sort_by_name();
	return 0;
}
std::string TelephoneBook::lookup_by_number(const std::string &number){
	sort_by_number();
	return 0;
}
