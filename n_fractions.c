//WAP to find the sum of n fractions.
#include<stdio.h>
struct frac
{
    int n,d;
};
typedef struct frac fraction;
fraction input()
{
    fraction a;
    printf("enter numerator :");
    scanf("%d",&a.n);
    printf("enter denomerator");
    scanf("%d",&a.d);
    return a;
}
fraction add(fraction a , fraction b)
{
    fraction result;
    if(a.d==b.d)
    {
         result.d=a.d;
         result.n=a.n+b.n;
     }
    else
    {
        result.d=a.d*b.d;
        result.n=(a.n+b.d)+(b.n+a.d);
    }
return result;
 }
int main()
{
    int i;
    printf("enter the number of fractions that to be added :");
    scanf("%d",&i);
    fraction s,a[i];
    s.n=0;
    s.d=1;
    for(int k=0; k<i; k++)
    {
        printf("for the fraction %d \n",(k+1));
        a[k]=input();
    }
    for(int k=0;k<i;k++)
    {
        s=add(s,a[k]);
    }
    printf("the addition of the given fractions is  %d / %d ",s.n,s.d);
    return 0;
}
