#include <iostream>

using namespace std;

int TypesMain(int argc, char* argv[])
{
    static_assert(sizeof(int), "sizeof(int) is small.");
    return 0;
}