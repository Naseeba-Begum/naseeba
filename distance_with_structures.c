//WAP to find the distance between two points using structures and 4 functions.
#include <stdio.h>
#include <math.h>
struct Point
{
    float x, y;
};
typedef struct Point values;

 values input()
 {
    values a;
    printf("Enter the values with respect to x: ");
    scanf("%f",&a.x);
    printf("Enter the values with respect to  y: ");
    scanf("%f",&a.y);
    return a;
     
 }
 
float getDistance(values a ,values b)
{
    float distance;
    distance = sqrt((a.x - b.x) * (a.x - b.x) + (a.y-b.y) *(a.y-b.y));
    return distance;
}
void output(values a, values b,float distance)
{
     printf("Distance between point a %f %f and point b %f %f is  %f\n",a.x,a.y,b.x,b.y ,getDistance(a, b));
}

float main()
{

    values a,b;
    float d;
    a=input();
    b=input();
    d=getDistance(a,b);
    output(a,b,d);
}
