#include <stdio.h>

int main(int argc, char* argv[]) {
    FILE *f1, *f2, *f3;
    char c;
    f1 = fopen(argv[1], "r");
    f3 = fopen("f3.txt", "w");
    while (1) {
        char c = getc(f1);
        if(c != EOF) putc(c, f3);
        else break;
    }
    fclose(f1);
    putc('\n', f3);
    f2 = fopen(argv[2], "r");
    while (1) {
        char c = getc(f2);
        if(c != EOF) putc(c, f3);
        else break;
    }
    fclose(f2);
    putc('\n', f3);
    fclose(f3);
}