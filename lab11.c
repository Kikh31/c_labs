#include <stdio.h>
#include "circle.h"

int main() {
    int x, y;
    double rad;
    printf("Введите координаты цента окружности и её радиус:\n");
    scanf("%d %d %lf", &x, &y, &rad);
    struct Circle c = mkCircle(x, y, rad);
    printf("Площадь окружности: %.2lf\n", area(c));
    printf("Длина окружности: %.2lf\n", cir_len(c));
}
