//WAP to find the sum of two fractions.
#include<stdio.h>
struct frac
{
int numerator,denomerator;
};
typedef struct frac fraction;
fraction input()
{
fraction n;
printf("enter numerator : ");
scanf("%d",&n.numerator);
printf("enter denomerator");
scanf("%d",&n.denomerator);
return n;
}
fraction add(fraction a, fraction b)
{
fraction result;
if(a.denomerator==b.denomerator)
{
result.denomerator=a.denomerator;
result.numerator=a.numerator+b.numerator;
}
else
{
result.denomerator=a.denomerator*b.denomerator;
result.numerator=(a.numerator*b.denomerator)+(b.numerator*a.denomerator);
}
return result;
}
int main()
{
fraction a,b,c;
a=input();
b=input();
c=add(a,b);
printf("the sum of two fraction given numerator and denomerator  %d, %d and %d,%d is %d /%d ",a.numerator,a.denomerator,b.numerator,b.denomerator,c.numerator, c.denomerator);
return 0;
}
