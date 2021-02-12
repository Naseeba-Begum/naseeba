//WAP to find the distance between two point using 4 functions.
#include <stdio.h>
#include <math.h>

float input()
{
float number;
printf("enter the distance between the point:");
scanf("%f" ,&number);
return number;
}

float distance(float x1,float y1,float x2,float y2)
{
    float dist;
    dist = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    return dist;
}

void display(float distance,float x1,float y1,float x2,float y2)
{
    printf("x1 entered is %f\n ",x1);
    printf("\ny1 entered is %f \n",y1);
    printf("\nx2 entered is %f \n",x2);
    printf("\ny2 entered is %f \n",y2);
    printf("The distance between  %f,%f and %f,%f is %f \n", x1, y1, x2, y2, distance);
}

float main()
{
    float x1,y1,x2,y2,d;
    x1=input();
    y1=input();
    x2=input();
    y2=input();
    d= distance(x1,y1,x2,y2);
    display(d,x1,y1,x2,y2);
    return 0 ;
 }
