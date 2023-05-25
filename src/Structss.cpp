#include <iostream>

struct Address {
    const char* name;   // Yuri Melo
    int number;         // 23
    const char* street; // Rua Yuri S. Melo
    const char* town;   // Batalha
    char state[2];      // AL
    const char* zip;    // "57420-000"
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
void point_address(Address* p) {
    std::cout << "Name: " << p->name << std::endl;
    std::cout << "zip: " << (*p).zip << std::endl;
    std::cout << "State: " << (*p).state[0] << (*p).state[1] << std::endl;
}

// Struct passed by reference and accessed using the . (dot notation)
void print_address(const Address& r) {
    std::cout << r.name << std::endl;
    std::cout << r.number << std::endl;
    std::cout << r.state << std::endl;
    std::cout << r.street << std::endl;
    std::cout << r.town << std::endl;
    std::cout << r.zip << std::endl;
}

// Objects of structure types can be assigned, passed as function arguments, and returned as the result from a function.
Address current;

Address set_current(Address next) {
    Address prev = current;
    current = next;
    return prev;
}

struct Time {
    int value;
    char hour;
    char seq;
};

struct Person {
    int num;
    const char* name;
};

int StructsMain() {
    Foo();
    Address adr = Init();
    point_address(&adr);
    Person yuri = { 90, "fgdsfsdfsdf" };

    set_current(adr);

    std::cout << "Name: " << current.name << std::endl;

    // Analyzing size of struct 
    std::cout << sizeof(Time) << std::endl;

    // Accessing by reference
    std::cout << yuri.num << std::endl;
    std::cout << yuri.name << std::endl;
    yuri.num = 80;
    std::cout << yuri.num << std::endl;

    return 0;
}