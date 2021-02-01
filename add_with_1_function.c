#include<stdio.h>
#include<stdlib.h>
 
int add(int , int );
int main()
{
    int num1, num2, res;
    printf("enter First Number:\t");
    scanf("%d", &num1);
    printf("enter Second Number:\t");
    scanf("%d", &num2);
    res=add(num1,num2);
    printf("\nAddition of Two Numbers: %d", res);
    
    return 0;
}
 
int add(int x, int y)
{
    int res = x + y;
    return res;
}
