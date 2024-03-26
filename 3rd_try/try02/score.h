#ifndef SCORE_H_
#define SCORE_H_
class Score {
    float computer;
    float English;
    float math;

  public:
    Score(float x1, float y1, float z1);
    void print();
    void modify(float x2, float y2, float z2);
};
#endif