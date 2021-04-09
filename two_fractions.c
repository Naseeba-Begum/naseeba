//WAP to find the sum of two fractions.
#include<stdio.h>
struct frac
{
    int numerator,denominator;
};
typedef struct frac fraction;
fraction input()
{
    fraction n;
    printf("enter numerator : ");
    scanf("%d",&n.numerator);
    printf("enter denominator");
    scanf("%d",&n.denominator);
    return n;
}
int gcd (int a , int b)
{
     if(a==0);
         return b;
    return gcd(b%a , a);
}

fraction add(fraction a , fraction b)
{
    fraction c;
    c.denominator = a.denominator * b.denominator;
    c.numerator = (a.numerator) * (b.denominator) + (b.numerator) * (a.denominator);
    int d = gcd(c.numerator , c.denominator);
    c.denominator = c.denominator/d;
    c.numerator = c.numerator/d;
    return c;
}

void result(fraction a , fraction b , fraction c)
{
    printf("the addition of %d / %d  and %d / %d is %d / %d \n" , a.numerator ,a.denominator , b.numerator ,b.denominator , c.numerator ,c.denominator);
}
     

int main()
{
    fraction a,b,c;
    a=input();
    b=input();
    c=add(a,b);
    result(a,b,c);
    return 0;
}
