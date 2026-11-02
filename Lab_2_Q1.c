#include<stdio.h>
int main() {
    
int a ; 
int b ;  

printf("Enter the first integer:");
scanf("%d", &a); 
printf("Enter the second integer:");
scanf("%d", &b);
printf("The product of %d and %d is: %d\n", a ,b ,a*b);
int division = (double)a/b;
printf("The division of %d and %d is:%.5f\n", a ,b ,division);

return 0 ;
}