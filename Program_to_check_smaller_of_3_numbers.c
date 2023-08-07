#include <stdio.h>
int main()
{
int num1,num2,num3;
printf("enter three numbers\n");
scanf("%d %d %d",&num1,&num2,&num3);
if((num1<num2)&&(num1<num3))
printf(" smaller number is %d\n",num1);
else if ((num2<num3)&&(num2<num1))
printf(" smaller number is %d\n",num2);
else if((num3<num2)&&(num3<num1))
printf(" smaller number is %d\n",num3);
else
printf("numbers are equal");
return 0;
}
