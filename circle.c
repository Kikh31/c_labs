#include "circle.h"
#include <math.h>

double area(struct Circle c) {
    return M_PI * c.rad * c.rad;
}

double cir_len(struct Circle c) {
    return 2 * M_PI * c.rad;
}

struct Circle mkCircle(int x, int y, double rad) {
    struct Circle res;
    res.x = x;
    res.y = y;
    res.rad = rad;
    return res;
}
