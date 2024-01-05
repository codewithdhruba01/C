#include<stdio.h>
int main(){
    int cp;
    int sp;
    double amount;
    printf("Enter Your Cost Price : ");
    scanf("%d", &cp);
     printf("Enter Your Selling Price : ");
    scanf("%d", &sp);
    if( sp>cp) {
        amount = sp-cp;
        printf("Your Profit is %.2f",amount);
    }
        if(sp==cp) {
            printf("No Profit No Loss.");
        }
        // if(cp>sp){
        // printf("Your Profit.");
        else{
            amount = cp-sp;
            printf("Your Loss is %.2f", amount); 
        }
        return 0;
    }
