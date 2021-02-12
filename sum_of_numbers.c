//Write a program to find the sum of n different numbers using 4 functions
#include <stdio.h>
int input()
{
    int n;
    printf("Entering the total number of elements containing in an array\n");
    scanf("%d",&n);
    return n;
}

int input_array(int n, int a[n])
{
    int i;
    for( i=0;i<n;i++)
    {
        printf("Entering the element number %d of the array\n",i);
        scanf("%d",&a[i]);
    }
 return 0;
}

int array_sum(int n, int a[n])
{
    int sum=0,i;
    for(i=0;i<n;i++) {
        sum = sum + a[i];
    }
    return sum;
}

int results(int n, int a[n], int sum)
{
    int i;
    printf("The sum of all the elements is turned out to be \t");
    for(i=0;i<n-1;i++) 
    {
        printf("%d+",a[i]);
    }
    printf("%d = %d",a[i],sum);
return 0;
}

int main()
{
    int n,sum;
    n = input();
    int a[n];
    input_array(n,a);
    sum=array_sum(n,a);
    results(n,a,sum);
}
