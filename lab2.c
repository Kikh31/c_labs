#include <stdio.h>
#include <math.h>

int main() {
    long double z1, z2, a;
    scanf("%Lf", &a);
    z1 = (sinl(2 * a) + sinl(5 * a) - sinl(3 * a)) / (cosl(a) + 1 - 2 * powl(sinl(2 * a), 2));
    z2 = 2 * sinl(a);
    printf("%Lf %Lf", z1, z2);
}
