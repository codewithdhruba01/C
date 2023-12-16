#include<stdio.h>
int main() {
    int i, n = 5, x = n;
    for(i=1;i<=n*n;i++)
    {
        if(i<x)
        printf(" ");
        else
        printf("* ");

        if(i%n==0)
         {
        x = x + n - 1;
        printf("\n");
    }

     }
        return 0;
}