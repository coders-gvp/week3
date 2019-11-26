//program to perform opweration using switch statement
#include<stdio.h>
void main()
{
    char d;
    int a,b,c;
    printf("enter number on which the operation is to be performed and then operants\n");
    scanf("%d\n%d\n%c",&a,&b,&d);
    switch(d)
    {
    case'+': c=a+b;
    printf("addition of %d and %d is : %d",a,b,c);
        break;   
    case'-': c=a-b;
    printf("difference of %d and %d is : %d",a,b,c);
        break;
    case'*': c=a*b;
    printf("multiplication of %d and %d is : %d",a,b,c);
        break;
    case'/': c=a/b;
    printf("division of %d and %d is : %d",a,b,c);
        break;
    case'%': c=a%b;
    printf("modulus of %d and %d is : %d",a,b,c);
        break;
    default : printf("please enter the correct operator");
    }
}
