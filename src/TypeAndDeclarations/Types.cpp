#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    static_assert(4 < sizeof(int), "sizeof(int) is small.");
    return 0;
}
