#ifndef STUDENT_H_
#define STUDENT_H_
#include "score.h"
class Student {
  private:
    int number;
    char *name;
    Score score;

  public:
    Student(int number1, char *name1, float computer, float English,
            float math); // 构造函数的声明
    ~Student();          // 析构函数的声明
    void modify(Score score1) { score = score1; }
    void print();
};
#endif