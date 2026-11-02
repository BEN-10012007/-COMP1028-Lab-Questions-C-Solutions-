#include<stdio.h>
int main(){

int a=1;


printf("%s\t%s\t%s\n","number","square","cube");

while(a<=5){
    int square=a*a;
    int cube=a*a*a;
printf("%d\t%d\t%d\n",a,square,cube);


a++;

}
return 0;




    
}