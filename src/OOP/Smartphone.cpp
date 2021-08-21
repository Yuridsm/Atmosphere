#include <iostream>

using namespace std;

// Abstract class
class Smartphone {
public:
    virtual void TakeASelfie() = 0;
};

class Xioami : public Smartphone {
public:
    void TakeASelfie() {
        cout << "Android selfie\n";
    }
};

class IPhone : public Smartphone {
public:
    void TakeASelfie() {
        cout << "iOS selfie\n";
    }
};

class GalaxyA50 : public Smartphone {
public:
    void TakeASelfie() {
        cout << "GalaxyA50 selfie\n";
    }
};

int main() {
    Smartphone* s1 = new Xioami();
    Smartphone* s2 = new IPhone();
    Smartphone* s3 = new GalaxyA50();

    s1->TakeASelfie();
    s2->TakeASelfie();
    s3->TakeASelfie();
}