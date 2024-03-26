#include "Rectangle.h"
#include <iostream>

int main() {
    Rectangle rec(3.5, 2.7);
    float area1 = rec.Area();
    std::cout << "面积是: " << area1 << std::endl;

    return 0;
}