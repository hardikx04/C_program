#include <stdio.h>
int main()
{
 int A[10],min,max,i;
 printf("Enter 10 values\n");
 for(i=0;i<10;i++){
 scanf("%d",&A[i]);
 
 }
 for(i=1;i<10;i++){
 min=A[0],max=A[0];
 if(A[i]<A[i+1]){
 min=A[i];
 }
 if(A[i]>A[i+1]){
 max=A[i];
 }
 }
 
 
 printf("max is %d\n",max);
 printf("min is %d\n",min);
 return 0;
}
