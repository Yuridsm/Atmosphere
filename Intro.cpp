#include <iostream>

using namespace std;

int main() {
    int n = 90;
    int* ptr = &n;

    cout << "Value that stored in n variable: " << n << endl;
    cout << "Location address of n variable in physic memory: " << &n << endl;
    cout << "Value that stored in prt pointer: " << ptr << endl;
    cout << "Value pointed by ptr pointer: " << *ptr << endl;

    if (&n == ptr) {
        cout << "The same address of n variable is ptr value" << endl;
    }

}