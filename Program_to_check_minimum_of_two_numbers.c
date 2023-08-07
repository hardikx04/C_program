#include <stdio.h>
int main()
{
int num1,num2;
printf("enter two numbers\n");
scanf("%d %d",&num1,&num2);
if(num1>num2)
printf("num 2 is smaller");
else if(num1<num2)
printf("num 1 is smaller");
else
printf("num1 and num2 are equal");
return 0;
}
