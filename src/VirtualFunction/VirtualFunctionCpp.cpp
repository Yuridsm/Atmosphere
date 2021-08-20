#include <iostream>

using namespace std;

class Instrument {
public:
    virtual void MakeSound() = 0;
};

class Piano : public Instrument {
public:
    void MakeSound() {
        cout << "Piano playing..." << endl;
    }
};

class Accordion : public Instrument {
public:
    void MakeSound() {
        cout << "Accordion playing..." << endl;
    }
};

int main() {
    Instrument * i1 = new Accordion();
    i1->MakeSound();

    Instrument * i2 = new Piano();
    i2->MakeSound();
}