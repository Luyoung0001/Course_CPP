#include <iostream>
using namespace std;
// 在这个修改后的代码中，我们将函数 f 的参数 max 和 min 改为引用参数，
// 这样在函数调用时直接传递变量名即可，无需再取地址传递指针。在函数内部，
// 直接对 max 和 min 进行操作即可，无需再使用指针的解引用。
void f(int a[], int n, int &max, int &min) {
    max = min = a[0];
    for (int i = 1; i < n; i++) {
        if (max < a[i])
            max = a[i];
        if (min > a[i])
            min = a[i];
    }
}
int main() {
    int a[10] = {2, 5, 3, 9, 0, 8, 1, 7, 6, 4};
    int max, min;
    f(a, 10, max, min);
    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;
    return 0;
}