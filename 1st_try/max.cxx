#include <iostream>
using namespace std;
int max(int x, int y); // 函数声明
int main() {
    int a, b, c;
    cin >> a >> b;
    c = max(a, b);
    cout << "max= " << c << endl;
}
int max(int x, int y) // 函数定义
{
    int z;
    if (x > y)
        z = x;
    else
        z = y;
    return (z);
}