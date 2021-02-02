//Write a program to find the volume of a tromboloid using one function
#include<stdio.h>
float volume(float h,float d,float b)
{   
    float a=((h*d*b)+(d/b))/3;
	return a;
}
 
float main()
{
 
	float h,d,b,a;
	printf("enter heigth: ");
	scanf("%f",&h);
	printf("enter diameter: ");
	scanf("%f",&d);
	printf("enter breadth: ");
	scanf("%f",&b);
    b=volume(h,b,d);
	printf("volume: %f\n",b);
	return 0;
}
