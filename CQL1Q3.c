#include<stdio.h>
int main(){
int num1;    
printf("inputs one five-digit number:");
scanf("%d", &num1);

int firstDigit =num1/10000;

int secondDigit= ((int)(num1/1000))%10;

int thirdDigit= ((int)(num1/100))%10;

int fourthDigit=((int)(num1/10))%10;

int fifthDigit=((int)(num1))%10;

printf("%d   %d   %d   %d   %d", firstDigit, secondDigit, thirdDigit, fourthDigit, fifthDigit);


    return 0;
}