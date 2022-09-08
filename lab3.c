#include <stdio.h>

int main() {
    int n16_1, n16_5;
    printf(">>");
    scanf("%X", &n16_1);
    printf("2. %o\n", n16_1);
    printf("3. %X %X\n", n16_1, n16_1 << 4);
    printf("4. %X %X\n", n16_1, ~n16_1);
    printf(">>");
    scanf("%X", &n16_5);
    printf("5. %X", n16_1 & n16_5);
}
