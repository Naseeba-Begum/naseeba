//WAP to find the distance between two points using structures and 4 functions.
#include <stdio.h>
#include <math.h>

struct Point {
    float x, y;
};


float getDistance(struct Point a, struct Point b)
{
    float distance;
    distance = sqrt((a.x - b.x) * (a.x - b.x) + (a.y-b.y) *(a.y-b.y));
    return distance;
}

float main()
{
    struct Point a, b;
    printf("Enter coordinate of point a: ");
    scanf("%f %f", &a.x, &a.y);
    printf("Enter coordinate of point b: ");
    scanf("%f %f", &b.x, &b.y);
    
    printf("the co-ordinates entered of point a are %f and %f\n",a.x,a.y);
    printf("the co-ordinates entered of point b are %f and %f\n",b.x,b.y);
    printf("Distance between point a %f %f and point b %f %f is  %f\n",a.x,a.y,b.x,b.y ,getDistance(a, b));
    
}
