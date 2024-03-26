#include <iostream>
using namespace std;

int model = 90;
int v[] = {1, 2, 3, 4};
const int x = 0;
void f() {
    model = 200;
    v[2]++;
}
int main() {
    f();
    return 0;
}