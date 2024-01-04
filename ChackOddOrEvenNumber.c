#include<stdio.h>
int main () {
    int n;
printf("Enter a number : ");
scanf("%d", &n);
if(n%2==0){
    printf("Even number");
}
    if (n%2!=0){
     printf("Odd Number");
    }

return 0;
}