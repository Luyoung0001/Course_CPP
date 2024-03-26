#include "score.h"
#include <iostream>
Score::Score(float x1, float y1, float z1) {
    computer = x1;
    English = y1;
    math = z1;
}
void Score::print() {
    std::cout << "computer: " << computer << std::endl;
    std::cout << "English: " << English << std::endl;
    std::cout << "math: " << math << std::endl;
}
void Score::modify(float x2, float y2, float z2) {
    this->computer = x2;
    this->English = y2;
    this->math = z2;
}
