#include "student.h"
#include <iostream>
#include <string>
using namespace std;
int main() {
    int numberi;
    char namei[15];
    float scorei;

    cout << "Enter number:\n";
    cin >> numberi;
    cout << "Enter name:\n";
    cin >> namei;
    Student stu1(numberi, namei, 80,90,100); // 创建对象stu1时执行了初始化

    cout << "Enter number:\n";
    cin >> numberi;
    cout << "Enter name:\n";
    cin >> namei;
    Student stu2(numberi, namei, 81,91,101); // 创建对象stu2时执行了初始化

    // 修改成绩
    Score score(100,100,100);
    stu2.modify(score); // 对象stu2调用成员函数modify( )

    stu1.print(); // 对象stu1调用成员函数print( )
    stu2.print(); // 对象stu2调用成员函数print( )
    return 0;
}