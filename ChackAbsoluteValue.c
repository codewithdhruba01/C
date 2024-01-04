#include<stdio.h>
int main() {
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    if(n<0){
        n = n*(-1);
    }
    printf("The Absolute Value is : %d",n);
    return 0;
}