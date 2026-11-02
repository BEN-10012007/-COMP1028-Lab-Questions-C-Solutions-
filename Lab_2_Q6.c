#include<stdio.h>
int main(void){
int a=0;
int b=0;
printf("Enter the first integer:");
scanf("%d",&a);
printf("Enter the second integer:");
scanf("%d",&b);
if (a<b){
    printf("Ascending order:%d,%d",a,b);
}
else
printf("Ascending order:%d,%d",b,a);


}