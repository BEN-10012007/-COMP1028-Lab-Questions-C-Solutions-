#include<stdio.h>
int main(void){
int grade[3];
for(int i=0;i<3;i++){
    printf("Enter the grade for student %d:",i+1);
    scanf("%d",&grade[i]);}
printf("Grades within the range [5,10]:");
for(int i=0;i<3;i++){
    if(grade[i]>=5 && grade[i]<=10){
        printf("\nStudent %d: %d\n",i+1,grade[i]);
    }
}
}    
// int num1,num2,num3;
// printf("Enter the grade for student 1:");
// scanf("%d",&num1);
// printf("Enter the grade for student 2:");
// scanf("%d",&num2);
// printf("Enter the grade for student 3:");
// scanf("%d",&num3);
// printf("Grades within the range [5,10]:\n");
// if(5<=num1 && num1<=10){
// printf("Student 1: %d\n",num1);

// }
// if(5<=num2 && num2<=10){
// printf("Student 2: %d\n",num2);

// }
// if(5<=num3 && num3<=10){
// printf("Student 3: %d\n",num3);

// }


