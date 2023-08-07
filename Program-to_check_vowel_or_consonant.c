#include <stdio.h>
int main()
{
char ch;
printf("enter an alphabet\n");
scanf("%c",&ch);
if((ch=='A')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U')||(ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=
='u'))
printf("it's a vowel");
else
printf("it's a consonant");
return 0;
}
