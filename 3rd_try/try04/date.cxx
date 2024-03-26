#include <iostream>
class Date {
    int d, m;

    mutable int y;

  public:
    int day() const { return d; }
    int month() const { return m; }
    int year() const;
};

inline int Date::year() const { return y++; }