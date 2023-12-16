#include<stdio.h>
int main(){
    int r = 5; // The Volume of Sphere of = 4/3 π r³
    printf("Enter Radius : ");
    scanf("%d", &r);
   float v = 4 * 3.1415 * r * r * r / 3;

    printf("Volume of Sphere : %f", v);
    return 0;
}