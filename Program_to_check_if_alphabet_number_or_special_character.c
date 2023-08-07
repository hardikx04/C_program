#include <stdio.h>
int main(){
 char ch;
 printf("Enter \n ");
 scanf("%c",&ch);
 if((ch>='A') && (ch<='Z') || (ch>='a') && (ch<='z'))
 printf("its an aphabet");
 else if((ch>='0') && (ch<='9'))
 printf("its a number");
 else
 printf("its a special character");
 return 0;
}
