//Write a program to find the volume of a tromboloid using one function
#include<stdio.h>


float main()
{
 
	float h,d,b,a;
	printf("enter heigth: ");
	scanf("%f",&h);
	printf("enter diameter: ");
	scanf("%f",&d);
	printf("enter breadth: ");
	scanf("%f",&b);
        a=((h*d*b)+(d/b))/3;
	printf("volume of tromoboloid given h,b,d is :%f",a);
	return 0;
}
