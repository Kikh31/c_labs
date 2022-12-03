#ifndef LABS_CIRCLE_H
#define LABS_CIRCLE_H

struct Circle {
    int x;
    int y;
    double rad;
};

struct Circle mkCircle(int x, int y, double rad);

double area(struct Circle c);

double cir_len(struct Circle c);




#endif