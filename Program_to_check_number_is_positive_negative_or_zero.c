#include <stdio.h>
int main(){
int n;
printf("enter a no.\n");
scanf("%d",&n);
if(n>0)
printf("no. is positive");
else if (n<0)
printf("no. is negative");
else
printf("no. is zero");
return 0;
}
