#include<stdio.h>
int main(){
int integer1, integer2, integer3;
printf("Enter three different integers: ");
scanf("%d %d %d", &integer1, &integer2, &integer3);

int sum = integer1+integer2+integer3;
printf("Sum is %d\n", sum);

float ave = (float)(integer1+integer2+integer3)/3 ;
printf("Average is %f\n", ave);

int pro = integer1*integer2*integer3;
printf("Product is %d\n", pro);

// Smallest

if(integer1<integer2 && integer1<integer3){
    printf("Smallest is %d\n",integer1);
}

if(integer2<integer1 && integer2<integer3){
    printf("Smallest is %d\n",integer2);
}

if(integer3<integer2 && integer3<integer1){
    printf("Smallest is %d\n",integer3);
}

// Largest

if(integer1>integer2 && integer1 >integer3){
    printf("Largest is %d\n",integer1);
}

if(integer2>integer1 && integer2>integer3){
    printf("Largest is %d\n",integer2);
}

if(integer3>integer2 && integer3 >integer1){
    printf("Largest is %d\n",integer3);
}


return 0;

}