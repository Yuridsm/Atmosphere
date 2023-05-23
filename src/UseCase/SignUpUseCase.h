#include <string>
using namespace std;

class SignUpUseCase
{
public:
	SignUpUseCase();
	void Execute(string & email, string & password);
};