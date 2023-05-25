#include <string>

using std::string;

class Person
{
private:
	string firstName_;
	string lastName_;

public:
	Person();
	Person(const string & firstName, const string & lastName);
	void Display();
	void Formal();
};