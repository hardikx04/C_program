#include <stdio.h>
int main()
{
 int year;
 printf("enter the year you want to check \n");
 scanf("%d",&year);
 if((year%4==0) || (year%400==0) || (year%100==0))
 printf("year is a leap year");
 else
 printf("not a leap year");
 return 0;
}
