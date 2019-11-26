#include <stdio.h>
int main()
{
int a,b,x;
printf("enter the values");
scanf("%d%d",&a,&b);
printf("Enter the limit value");
scanf("%d",&x);
if((x>a&&x<b)||(x<a&&x>b))
printf("key value is between the limits");
else
printf("key value is not between the limits");
}