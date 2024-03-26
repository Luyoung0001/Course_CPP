#include "Rectangle.h"
#include <iostream>

float Rectangle::Area() { return this->length * this->width; }
Rectangle::Rectangle(float length, float width) {
    this->length = length;
    this->width = width;
}