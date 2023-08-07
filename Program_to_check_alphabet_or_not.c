#include <stdio.h>
int main()
{
char ch;
printf("enter an alphabet\n");
scanf("%c",&ch);
if((ch>='A')&&(ch<='Z')||(ch>='a')&&(ch<='z'))
printf("its an alphabet");
else
printf("its not an alphabet");
return 0;
}
