#include <iostream>
#include "point.h"
int main() {

    point p1;
    point p2(2,3);

    p1.setY(3);
    p1.setX(4);
    p1.affiche();

    p2.affiche();




 std::cout << "Hello, World!" << std::endl;
    return 0;
}

