#include "counter.h"
#include <iostream>
int main() {
    counter count(10);
    count.print();
    count.decrement();
    count.print();
    count.increment();
    int num = count.getvalue();
    std::cout << "num: " << num << std::endl;
    return 0;
}