#include<stdio.h>
int main()
{
char c;
printf("enter a symbol");
scanf("%c",&c);
if(c>=65&&c<=90)
printf("lower case is: %c",c+32);
else if(c>=97&&c<=122)
printf("uppercase is: %c",c-32);
else
printf("not an alphabet!!!");
}