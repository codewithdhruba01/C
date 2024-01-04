#include<stdio.h>
int main(){
    int year;
    printf("Enter a Number : ");
    scanf("%d", &year);
    if (year % 400 == 0) {
        printf("%d is a leep year.", year);
    }
    else if (year % 100 == 0) {
        printf("%d is not a leep year", year);
    }
    else if (year % 4 == 0) {
        printf("%d is not a leep year", year);
    }
     else {
        printf("%d is not a leep year", year);
    }
    return 0;
}