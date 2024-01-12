#include<stdio.h>
int main () {
	int a;
	int b;
	int c;
	printf("Age Of Ram:");
	scanf("%d",&a);
	printf("Age Of Shayam:");
	scanf("%d",&b);
	printf("Age Of Ajay:");
	scanf("%d",&c);
	if (a<b && a<c) {
        printf("%d Age  Ram is a Younger.",a);
    }
    if (b<a && b<c) {
        printf("%d Age  Shayam is a Younger.",b);
    }
    if (c<a && c<b) {
        printf("%d Age  Ajay is a Younger.",c);
    }
    if (a == b && a == c) {
        printf("All Are Equal....");
    }
    return 0;
}
