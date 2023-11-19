#include <iostream>

#include "Headers/Stack.h"
#include "UseCase/SignUpUseCase.h"
#include "xmlParser/lxml.hpp"

using namespace std;

int main()
{
	XMLDocument doc;
	if (XMLDocument_load(&doc, ".\\src\\xmlParser\\test.xml"))
	{
		printf("%s\n", doc.source);
		XMLDocument_free(&doc);
	}

	return 0;
}