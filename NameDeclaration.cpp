#include <iostream>
#include <vector>

struct List;

struct Link {
    Link* pre;
    Link* suc;
    List* member_of;
    int data;
};

struct List {
    Link* head;
};

struct Point {
    int x, y;
};

struct Points {
    std::vector<Point> elem; // Must contain at least one Point
    Points(Point p0) { elem.push_back(p0); }
    Points(Point p0, Point p1) { elem.push_back(p0); elem.push_back(p1); }
};

int NameDeclarationMain() {
    Points x1{ {100, 200} };
    Points x2{ {1, 2}, {3, 4} };
    return 0;
}