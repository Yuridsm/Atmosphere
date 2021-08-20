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

    Instrument * i2 = new Piano();

    Instrument* instrument[2] = { i1, i2 };

    //Polymorphism
    for (int i = 0; i < 2; i++)
    {
        instrument[i]->MakeSound();
    }
}