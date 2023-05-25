#include <iostream>

using namespace std;

// Abstract class
class Smartphone {
public:
    virtual void TakeASelfie() = 0;
    virtual void MakeACall() = 0;
};

class Xioami : public Smartphone {
public:
    void TakeASelfie() {
        cout << "Android selfie\n";
    }

    void MakeACall() {
        cout << "Adroid is making a call\n";
    }
};

class IPhone : public Smartphone {
public:
    void TakeASelfie() {
        cout << "iOS selfie\n";
    }
    void MakeACall() {
        cout << "iOS is making a call\n";
    }
};

class GalaxyA50 : public Smartphone {
public:
    void TakeASelfie() {
        cout << "GalaxyA50 selfie\n";
    }
    void MakeACall() {
        cout << "GalaxyA50 is making a call\n";
    }
};

int SmartphoneMain() {
    Smartphone* s1 = new Xioami();
    Smartphone* s2 = new IPhone();
    Smartphone* s3 = new GalaxyA50();

    s1->TakeASelfie();
    s2->TakeASelfie();
    s3->TakeASelfie();

    s1->MakeACall();
    s2->MakeACall();
    s3->MakeACall();

    return 0;
}