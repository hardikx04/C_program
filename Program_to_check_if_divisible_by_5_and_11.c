#include <stdio.h>
int main()
{
int num;
printf("enter a number\n");
scanf("%d",&num);
if((num%5==0)&&(num%11==0))
printf("number is divisible by both 5 and 11");
else
printf("number is not divisible");
return 0;
}
