#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

const double PI = 3.1415926;
int main()
{
    for (int theta = 0; theta <= 360; theta += 15)
    {
        printf("°¢µµ %4d : ", theta);

        double s = sin(theta * PI / 180);
        double c = cos(theta * PI / 180);

        if (c - s > 0.1) 
        {
            for (double i = -1.0; i < s; i += 0.1)
                printf(" "); 
            printf("S"); 
            for (double i = s; i < c; i += 0.1)
                printf(" ");
            printf("C"); 
        }
        else if (s - c > 0.1) 
        {
            for (double i = -1.0; i < c; i += 0.1)
                printf(" "); 
            printf("C"); 
            for (double i = c; i < s; i += 0.1)
                printf(" ");
            printf("S"); 
        }
        else 
        {
            for (double i = -1.0; i < s; i += 0.1) 
                printf(" "); 
            printf("*"); 
        }
        puts("");
    }


    return 0;
}