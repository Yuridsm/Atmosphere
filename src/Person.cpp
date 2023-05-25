#include <iostream>

#include "Headers/Person.h"

Person::Person()
{
	firstName_ = "";
	lastName_ = "";
}

Person::Person(const string & firstName, const string & lastName = "")
{
	firstName_ = firstName;
	lastName_ = lastName;
}

void Person::Display()
{
	std::cout << firstName_ << std::endl;
}

void Person::Formal()
{
	std::cout << firstName_ << " " << lastName_ << std::endl;
}