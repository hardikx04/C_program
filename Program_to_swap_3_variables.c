#include <stdio.h>
int main()
{
 int temp;
 int a,b;
 printf("Enter the numbers you want to swap\n");
 scanf("%d %d",&a,&b);
 temp=a;
 a=b;
 b=temp;
 printf("the swapped variables are %d %d \n",a,b);
 return 0;
}
