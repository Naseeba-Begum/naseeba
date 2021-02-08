#include<stdio.h>

int main()
{
    int num1, num2, res;
    printf("enter First Number:\t");
    scanf("%d", &num1);
    printf("enter Second Number:\t");
    scanf("%d", &num2);
    res=num1+num2;
    printf("\n Addition of %d and %d is %d\n ",num1,num2, res);
    
    return 0;
}
