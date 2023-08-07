#include<stdio.h>
#include<math.h>
int main()
{
 float a,b,c,d,r1,r2,g;
 printf("d=b^2-4ac\nIf d>0 real and unequal roots\nIf d=0 real and equal roots\nIf d<0 
unequal and imaginary roots");
 printf("enter the values of a,b,c:");
 scanf("%f %f %f", &a,&b,&c);
 d= b*b-4*a*c;
 if (d>0){
 g=d/2*a;
 r1 = -b+sqrt(g);
 r2 = -b-sqrt(g);
 printf ("The real roots=\n%f \n %f", r1, r2);
 }
 else if (d==0){
 r1 = -b/(2*a);
 r2 = -b/(2*a);
 printf ("roots are equal =\n%f \n %f", r1, r2);
 }
 else
 printf("Roots are imaginary");
 
 return 0;

}
