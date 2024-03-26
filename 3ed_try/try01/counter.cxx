#include "counter.h"
#include <iostream>

counter::counter(int number) { value = number; }
void counter::increment() { value++; }
void counter::decrement() { value--; }
int counter::getvalue() { return value; }
void counter::print() { std::cout << "现在计数为:" << value << std::endl; }