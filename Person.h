#include <string>

using std::string;

class Person
{
public:
	string firstName_;
	string lastName_;

private:
	Person();
	Person(const string & firstName, const string & lastName);
	void Display();
	void Formal();
};