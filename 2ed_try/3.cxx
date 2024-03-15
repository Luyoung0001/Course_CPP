#include <iostream>

int max(int x, int y) { return (x > y) ? x : y; }
long max(long x, long y) { return (x > y) ? x : y; }
double max(double x, double y) { return (x > y) ? x : y; }

int main() {
    int int1 = 10, int2 = 20;
    long long1 = 100000, long2 = 200000;
    double double1 = 10.5, double2 = 20.5;

    std::cout << "Max of integers: " << max(int1, int2) << std::endl;
    std::cout << "Max of longs: " << max(long1, long2) << std::endl;
    std::cout << "Max of doubles: " << max(double1, double2) << std::endl;

    return 0;
}
