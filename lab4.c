#include <stdio.h>

int main() {
    int n;
    printf(">>");
    scanf("%d", &n);
    printf("1. %d\n", n > 21 && n < 56);

    printf(">>");
    scanf("%d", &n);
    printf("2. %d", n>>12 & 1);
}
