#include "student.h"
#include <iostream>
#include <string>

using namespace std;
// 构造函数的定义
Student::Student(int number1, char *name1, float computer, float English,
                 float math)
    : score(computer, English, math) {
    number = number1;
    name = new char[strlen(name1) + 1]; // 申请动态内存单元
    strcpy(name, name1);
}
// 析构函数的定义
Student::~Student() {
    delete[] name; // 释放动态内存单元
}
void Student::print() {
    cout << "number: " << number << " name: " << name << endl;
    this->score.print();
}