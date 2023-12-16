/*remainder nikalna*/
#include<stdio.h>
int main() {
    int a, b; //b > a
    printf("Enter Dividend Number : ");
    scanf("%d", &a);
     printf("Enter Divisor Number : ");
    scanf("%d", &b);
    int q = a/b;
    int r = a-(b*q); //Divisor * Quotient + Remainder = Dividend
    printf("The remainder when %d is divided by %d is : %d",a,b,r);
    printf("\n Thanks ");
return 0;
}
