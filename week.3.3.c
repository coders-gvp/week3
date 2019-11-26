#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,r1,r2,d,e;
	printf("Enter the coefficient of x2,x and constant");
	scanf("%lf%lf%lf",&a,&b,&c);
	d = b*b-4*a*c;
	if(d>0)
	{ 
	  r1=(-b+sqrt(d))/2*a;
	  r2=(-b-sqrt(d))/2*a;
	  printf("The nature of the Roots is real and different:\nroot1=%.2f and root2=%.2f",r1,r2);
	}
 else if(d==0)
	{
	  r1=(-b/(2*a));
	  r2=r1;
	  printf("The nature of the Roots is real and equal:\nroot=%.2f and root2=%.2f",r1,r2);
   	}
 else if(d<0)
    {
   	printf("The nature of the Roots is complex and imaginary");
    d=-d;
    e=sqrt(d)/(2*a);
    r1=(-b/(2*a));
    r2=(-b/(2*a));
    printf("root1 =%.2f+%.2fi  and  ",r1,e);
    printf("root2 =%.2f-%.2fi",r2,e);
   	}
}