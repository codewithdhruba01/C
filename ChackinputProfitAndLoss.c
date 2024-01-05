#include<stdio.h>
int main(){
    int cp;
    int sp;
    printf("Enter Your Cost Price : ");
    scanf("%f", &cp);
     printf("Enter Your Selling Price : ");
    scanf("%f", &sp);
    if( sp>cp) {
        printf("Your Profit.");
    }
        if(sp==cp) {
            printf("No Profit No Loss.");
        }
        // if(cp>sp){
        // printf("Your Profit.");
        else{
            printf("Your Loss."); 
        }
    }