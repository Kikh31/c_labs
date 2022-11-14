#include <stdio.h>
#include <malloc.h>

int size(int x) {
    int n = 0;
    for(int i = 1; i <= x; i*=10) n++;
    return n;
}

int *fun(int x) {
    int n = size(x);
    int *arr = malloc(n*sizeof(int));

    int i = n-1;
    while (x>0) {
        arr[i] = x%10;
        x/=10;
        i--;
    }

    return arr;
}

int sumn(int n) {
    if(n==0) return 0;
    return n%10 + sumn(n/10);
}

int main() {
    int n;
    scanf("%d", &n);
    int *arr = fun(n);
    for(int i = 0; i < size(n); i++) printf("%d ", arr[i]);
    printf("\n%d", sumn(n));
}