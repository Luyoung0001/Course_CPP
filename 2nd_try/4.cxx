#include <iostream>
int main() {
    // 使用 new 动态分配内存来保存名字
    char *name = new char[20]; // 假设名字的最大长度为 20

    // 向用户请求输入名字
    std::cout << "请输入您的名字：";
    std::cin >> name;

    // 输出保存的名字
    std::cout << "您输入的名字是：" << name << std::endl;

    // 释放动态分配的内存
    delete[] name;
    return 0;
}
