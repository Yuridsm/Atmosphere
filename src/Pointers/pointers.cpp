#include <iostream>
#include <typeinfo>

using namespace std;

void printOutIntNumber(int * prt) {
    cout << *prt << endl;
}

void printOutFloatNumber(float * prt) {
    cout << *prt << endl;
}

void printOutLetter(char * prt) {
    cout << *prt << endl;
}

void printOutDoubleNumber(double * prt) {
    cout << *prt << endl;
}

void printOut(void * prt) {
    
}


int main() {

    int number = 8;
    float weight = 56.4;
    double height = 1.75;
    char letter = 'Y';
    
    printOutIntNumber(&number);
    printOutFloatNumber(&weight);
    printOutDoubleNumber(&height);
    printOutLetter(&letter);
}