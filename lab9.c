#include <stdio.h>
#include <locale.h>
#include <math.h>

int isSimple(int x) {
    for(int i = 2; i <= sqrt(x); i++) {
        if(x%i==0) return 0;
    }
    return 1;
}

int main() {
    setlocale(LC_ALL, "Russian");
    char nums[10][13] = {
            "Ноль", "Один", "Два",
            "Три", "Четыре", "Пять",
            "Шесть","Семь","Восемь",
            "Девять"
    };
    int n;
    scanf("%d", &n);
    if(n>=0 && n<=9) {
        printf("%s\n", nums[n]);
    } else printf("Введена не цифра");

    int m;
    scanf("%d", &m);
    for(int i = 2; i<=m; i++) {
        if(isSimple(i)==1) printf("%d\n", i);
    }
}
