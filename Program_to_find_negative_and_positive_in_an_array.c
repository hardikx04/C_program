#include <stdio.h>
int main()
{
 int A[10],neg=0,pos=0,i;
 printf("Enter 10 values\n");
 for(i=0;i<10;i++)
 scanf("%d",&A[i]);
 
 
 
 
 
 for(i=0;i<10;i++)
 {
 
 if(A[i]<0)
 neg++;
 
 
 else if(A[i]>0)
 pos++;
 
 }
 
 
 printf("neg is %d\n",neg);
 printf("pos is %d\n",pos);
 return 0;
}
