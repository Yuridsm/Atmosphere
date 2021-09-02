#include <iostream>

struct Address {
    const char* name;   // Yuri Melo
    int number;         // 23
    const char* street; // Rua Yuri S. Melo
    const char* town;   // Batalha
    char state[2];      // AL
    const char* zip;    //"57420-000"
};

// We can initializate like this
void Foo() {
    Address jd;
    jd.name = "Yuri Melo";
    jd.number = 23;

    std::cout << "Name: " << jd.name << std::endl;
    std::cout << "Number: " << jd.number << std::endl;
}

// Another way that we can initializate variable of Address type 
Address Init() {
    Address jd = {
        "Yuri Melo",
        23,
        "Rua Yuri S. Melo",
        "Batalha",
        {'A','L'},
        "57420-000"
    };

    return jd;
}

// By using pointers
void point_address(Address *p) {
    std::cout << "Name: " << p->name << std::endl;
    std::cout << "zip: " << (*p).zip << std::endl;
    std::cout << "State: " << (*p).state[0] << (*p).state[1] << std::endl;
}

int main() {
    Foo();
    Address adr = Init();
    point_address(&adr);

    return 0;
}
