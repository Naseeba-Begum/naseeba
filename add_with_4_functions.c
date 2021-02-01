//Write a program to add two user input numbers using 4 functions.
#include <stdio.h>
int input()
{
    int a; 
    printf("Enter a number :");
    scanf("%d",&a);
    return a;
}

int find_sum(int num1, int num2)
{
    
    return num1+num2;
}

void output(int n1, int n2, int add)
{
    printf("Sum of %d + %d is %d\n",n1,n2,add);
}

int main()
{
    int number1,number2,res;
    number1=input();
    number2=input();
    res=find_sum(number1,number2);
    output(number1,number2,res);
    return 0;
}
