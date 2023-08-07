#include<stdio.h>
int main()
{
 int r,n,num,num1;
 printf("enter a number=");
 scanf("%d", num);
 n=0;
 num1=num;
 while(num!=0)
 {
 r=num%10;
 n=n*10+r;
 num=num/10;
 }
 if(num1==n)
printf("it is palindrome number");
 else
 printf("it is not palindrome number");
 return 0;
}
