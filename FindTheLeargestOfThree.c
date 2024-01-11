#include<stdio.h>
int main() {
    int a;
    int b;
    int c;
    printf("Enter Three Integer Number : ");
    scanf("%d %d %d", &a, &b, &c);
    if (a>b && a>c) {
        printf("%d is largest",a);
    }
    if (b>a && b>c) {
        printf("%d is largest",b);
    }
    if (c>a && c>b) {
        printf("%d is largest",c);
    }
    if (a == b && a == c) {
        printf("All are Equal");
    }
    return 0;
}