#include<stdio.h>
int main() {

    float a ;
    float b ;
    float ans;
    
    printf("Enter the coefficients of a (float):");
    scanf("%f",&a);
    printf("Enter the constant of b (float):");
    scanf("%f",&b);

    if(a!=0.0f){
        ans= (float)(-b)/a;
        printf("The solution of the equation %gx + %g = 0 is: x= %f ",a,b,ans);
    }   
    else if( b==0.0f){
             printf("The equation has infinitely many solutions(0 = 0).");
         
    }
    else{
        printf("The equation has no solution (contradiction)");
    }
    
    return 0;
}

