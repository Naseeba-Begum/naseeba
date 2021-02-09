//WAP to find the sum of two fractions.
#include<stdio.h>
typedef struct
{
float n,d;
} f;

float sum_fraction(float n1,float n2,float d1,float d2)
{
    f f1={n1,d1};
    f f2={n2,d2};
    f r={f1.n*f2.d+f2.n*f1.d, f1.d*f2.d};
    printf("fraction of two numbers %f / %f and %f /%f = %f/%f",n1 ,d1,n2,d2,r.n,r.d); 
}
float main()
{
    float n1, d1,n2,d2,a,b;
    printf("for fraction 1 : enter the value of numerator and denominator:");
    scanf("%f%f",&n1,&d1);
    printf("for fraction 2 :enter the value of numerator and denominator :");
    scanf("%f%f",&n2,&d2);
    sum_fraction(n1,n2,d1,d2);
} 
