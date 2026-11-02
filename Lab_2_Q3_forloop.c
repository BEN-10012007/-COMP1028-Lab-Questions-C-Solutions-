#include<stdio.h>
int main() {
printf("number\t square\t cube\n");
for(int i=1; i<=5; i++)
{
printf("%d\t %d\t %d\n", i,i*i,i*i*i);
}
return 0;
}