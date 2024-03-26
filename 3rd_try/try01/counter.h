#ifndef COUNTER_H_
#define COUNTER_H_
class counter {
    int value;

  public:
    counter(int number);
    void increment();
    void decrement();
    int getvalue();
    void print();
};
#endif