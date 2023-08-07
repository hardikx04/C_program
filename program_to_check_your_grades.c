#include <stdio.h>
int main()
{
 int grade;
 printf("enter your grades \n");
 scanf("%d",&grade);
 if((grade>=90)&&(grade<=100))
 printf(" topper,A");
 else if((grade>=80)&&(grade<=89))
 printf("ok ok,B");
 else if((grade>=70)&&(grade<=79))
 printf("needs improvement,C");
 else
 printf("Fail,F");
 
 return 0;
}
