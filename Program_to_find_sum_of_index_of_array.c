#include <stdio.h>
int main()
{
 int A[10],i,s=0;
 printf("Enter the elements of an array\n");
 for(i=0;i<10;i++)
 scanf("%d",&A[i]);
 for(i=0;i<10;i++){
 s=s+A[i];
 }
 printf("Sum of elements of an array is %d",s);
 
 return 0;
}
