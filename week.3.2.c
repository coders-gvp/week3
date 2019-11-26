#include<stdio.h>
int main()
{
  char c;
  printf("Enter a character");
  scanf("%c",&c);
  if((c>=65 && c<=90)||(c>=97 && c<=122))
  {
   if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U')
    printf("'%c' is Vowel",c);
   else
    printf("'%c' is Consonant",c);
  }
 else if(c>=48 && c<=57)
    printf("'%c' is digit",c);
 else
    printf("'%c' is special character",c);
 }

