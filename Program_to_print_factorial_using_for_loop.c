#include <stdio.h>
int main()
{
 int fact=1,key,i;
 printf("Enter the number you want to find factorial of\n");
 scanf("%d",&key);
 for(i=key;i>=1;i--){
 fact=fact*i;
 }
 printf("Factorial of %d is :%d",key,fact);
 return 0;
}
