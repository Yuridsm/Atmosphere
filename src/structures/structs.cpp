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
void Init() {
    Address jd = {
        "Yuri Melo",
        23,
        "Rua Yuri S. Melo",
        "Batalha",
        {'A', 'L'},
        "57420-000"
    };

    std::cout << "Name: " << jd.name << std::endl;
    std::cout << "Number: " << jd.number << std::endl;
    std::cout << "Street: " << jd.street << std::endl;
    std::cout << "Town: " << jd.town << std::endl;
    std::cout << "State: " << jd.state << std::endl;
    std::cout << "Zip: " << jd.zip << std::endl;
}

int main() {
    Foo();
    std::cout << "\n\n" << std::endl;
    Init();

    return 0;
}