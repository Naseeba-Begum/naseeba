//WAP to find the sum of n fractions.
#include<stdio.h>
struct frac
{
    int n,d;
};

typedef struct frac fraction;

int input_size()
{
    int a;
    printf("enter the maximum num of fraction here : \n");
    scanf("%d",&a);
    return a;
}
void input(int n , fraction f[n])
{
     printf("enter the numerator  and the denominator here : \n");
     for (int i=0; i<n; i++)
     {
         scanf("%d%d",&f[i].n,&f[i].d);
     }
}
int gcd(int n, int m)
{
    if(m==0)
        return n;
    return gcd(m , n%m);
}

fraction compute_two_fractions(fraction a , fraction b)
{
    fraction c;
    c.d = a.d * b.d;
    c.n = (a.n)*(b.d)+(b.n)*(a.d);
    int  e = gcd(c.n ,c.d);// e is  common factor//
    c.d = c.d/e;
    c.n = c.n/e;
    return c;
 }

fraction compute_n_fractions(int  n , fraction f[n])
{
    fraction sum;
    sum.n = 0;
    sum.d = 1;
    for(int i =0; i<n ; i++)
    {
        sum = compute_two_fractions(sum , f[i]);
    }
   return sum;
}

void result (int n , fraction f[n] ,fraction sum) 
{
    printf("the fractions that to be  added up are: \n");
    for(int i=0;i<n;i++)
    {
        printf("%d / %d \n" , f[i].n ,f[i].d);
    }
    printf("the sum is %d / %d", sum.n , sum.d);
}
int main()
{
    int a;
    a = input_size();
    fraction f[a] , sum;
    input(a , f);
    sum = compute_n_fractions(a,f);
    result(a , f , sum);
    return 0;
}
