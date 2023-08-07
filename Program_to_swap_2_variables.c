#include <stdio.h>
int main()
{ 
 int a,b;
 printf("Enter variables you want to swap \n");
 scanf("%d %d",&a,&b);
 printf("The variables before are %d %d \n",a,b);
 a=a+b;
 b=a-b;
 a=a-b;
 printf("after swap %d %d \n",a,b);
 return 0;
}
