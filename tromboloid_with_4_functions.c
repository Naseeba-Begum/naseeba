//WAP to find the volume of a tromboloid using 4 functions.
#include<stdio.h>
float input()
{  
   float number; 
   printf("Enter the number : ");
   scanf("%f", &number);
   return number;
}
float volume(float h, float d , float b ,float vol)
{  
   vol=((h*d*b)+(d/b))/3;
   return vol;
}

void display(float vol)

{  float h1,d1,b1;
    
   printf("volume of tromoboloid is %f", vol);
}

float main()
{
   
   float h1, d1 , b1 ,result;
   h1=input();
   d1=input();
   b1=input();
   
   printf("height entered is %f\n",h1);
   printf("diameter entered is %f\n",d1);
   printf("breadth entered is %f\n",b1);
   result = ((h1*d1*b1)+(d1/b1))/3;
   display(result);

   return 0;
}
