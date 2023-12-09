#include<stdio.h>
int main() {
    float p,r,t,si;
    printf("Your Principal | Amount : ");
    scanf("%f", &p);
    printf("your rate : ");
    scanf("%f", &r);
    printf("Your Time year : ");
    scanf("%f", &t);
    si = ( p * r * t)/100;
    printf("Your Simple Intarest : %f", si);
    return 0;
}
