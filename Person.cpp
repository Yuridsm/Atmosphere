#include "Person.h"

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