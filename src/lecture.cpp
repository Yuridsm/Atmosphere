#include <iostream>

using namespace std;

// Pointers to arrays

int Lecturemain() {
    int luckyNumbers[5] = { 1, 2, 3, 4, 5 };
    cout << luckyNumbers << endl;
    cout << &luckyNumbers[0] << endl;
    cout << luckyNumbers[2] << endl;
    cout << *(luckyNumbers + 2) << endl;

    return 0;
}