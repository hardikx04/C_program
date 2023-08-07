#include <stdio.h>
int main()
{
 int fact=1,key,key1;
 printf("Enter the number you want to find factorial of\n");
 scanf("%d",&key);
 key1=key;
 while(key>1){
 fact=fact*key;
 key--;
 }
 printf("Factorial of %d is :%d",key1,fact);
 return 0;
}
