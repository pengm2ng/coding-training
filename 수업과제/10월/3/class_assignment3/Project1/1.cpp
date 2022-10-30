#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void bin(int n)
{
    if (n < 2) 
        printf("%d", n);
    else 
    {
        bin(n / 2); 
        printf("%d", n % 2); 
    }
}

void oct(int n)
{

    if (n < 8) 
        printf("%d", n);
    else 
    {
        oct(n / 8); 
        printf("%d", n % 8); 
    }
}

void hex(int n)
{
 

    if (n < 10) 
        printf("%d", n);
    else if (n < 16)
        printf("%c", 'A' + n - 10);
    else
    {
        hex(n / 16); 

        int m = n % 16;
        if (m < 10)
            printf("%d", m);
        else if (m < 16) 
            printf("%c", 'A' + m - 10);
    }

}

int main()
{
    int a, b;


    scanf("%d %d", &a, &b);

    if (b == 2) 
        bin(a);
    else if (b == 8) 
        oct(a);
    else 
        hex(a);

    return 0;
}