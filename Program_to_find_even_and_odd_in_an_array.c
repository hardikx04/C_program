#include <stdio.h>
int main()
{
 int A[10],even=0,odd=0,i;
 printf("Enter 10 values\n");
 for(i=0;i<10;i++)
 scanf("%d",&A[i]);
 
 
 
 
 
 for(i=0;i<10;i++)
 {
 
 if(A[i]%2==0)
 even++;
 
 
 else if(A[i]%2!=0)
 odd++;
 
 }
 
 
 printf(" even %d\n",even);
 printf("odd %d\n",odd);
 return 0;
}
