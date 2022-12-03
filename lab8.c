#include <stdio.h>
#include <string.h>

int main() {
    char s1[20] = "12345";
    char s2[20]  = "6789";
    strncat(s1, s2, 2);
    printf("%s\n", s1);

    char s3[10] = "123";
    char s4[10] = "123";
    int res2 = strncmp(s3,s4, 2);
    if(res2>0) printf("s3>s4\n");
    else if(res2==0) printf("s3==s4\n");
    else printf("s3<s4\n");

    char s5[10];
    char s6[10] = "123";
    strncpy(s5, s6, 2);
    printf("s5 = %s, s6 = %s\n", s5, s6);

    char s7[10] = "02341";
    char *ans1 = strchr(s7, '4');
    printf("%lu\n", strlen(s7)- strlen(ans1));

    char s8[50] = "Раз Два, Три. Четыре";
    char *ans2 = strtok(s8, " ,.");
    while (ans2!=NULL) {
        printf("%s\n", ans2);
        ans2 = strtok (NULL," ,.");
    }
}