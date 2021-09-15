#include <iostream>
#include <typeinfo>
#include <string.h>

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

void printOut(void * ptr, char type) {
    switch(type) {
        case 'i':
            cout << *((int*)ptr) << endl;
            break;
        case 'c':
            cout << *((char*)ptr) << endl;
            break;
    }
}

int nLetters(const char* name) {
    int amount = 1;
    for(int i = 0; i < strlen(name); i++) {
        amount += i;
    }
    return amount;
}

int nNumbers(int numbers) {
    return numbers;
}

int Bar(int *number) {
    return *number;
}

int main() {

    int number = 8;
    float weight = 56.4;
    double height = 1.75;
    char letter = 'Y';

    printOut(&number, 'i');
    printOut(&letter, 'c');
    
    printOutIntNumber(&number);
    printOutFloatNumber(&weight);
    printOutDoubleNumber(&height);
    printOutLetter(&letter);

    int (*func)(const char*);
    int (*intFunc)(int);
    int (*ptrToFunc)(int*);

    func = &nLetters;
    intFunc = &nNumbers;
    ptrToFunc = &Bar;

    cout << "Number: " << intFunc(435) << endl;
    cout << "Letter amount: " << func("Yuri") << endl;
    cout << "Number: " << ptrToFunc(&number) << endl;

    // nullptr - represents null pointer
    int* pi = nullptr;
    
}