#include<stdio.h>
int main()
{
 int NOE,n;
 int min=0,max=0;
 printf("Enter the number of enmployees\n");
 scanf("%d",&NOE);
 printf("Enter %d salaries\n",NOE);
 scanf("%d",&n);
 max=n;
 min=n;
 NOE=NOE-1;
 while(NOE>0)
 {
 scanf("%d",&n);
 if(n>max)
 {
 max=n;
 }
 if(n<min)
 {
 min=n;
 }
 NOE--;
 }
 printf("Maximum Salary is %d\n",max);
 printf("Minimum Salary is %d\n",min);
 return 0;
}
