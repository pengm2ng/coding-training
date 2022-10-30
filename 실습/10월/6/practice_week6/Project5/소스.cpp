#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


void hanoi_tower(int n, char from, char temp, char to)
{
    if (n == 1)
        printf("원판 1가 %c에서 %c로 이동\n", from, to);
    else
    {
        hanoi_tower(n - 1, from, to, temp);
        printf("원판 %d가 %c에서 %c로 이동\n", n, from, to);
        hanoi_tower(n - 1, temp, from, to);
    }
}

int main() {


    int n;
    printf("하노이탑 입력 : ");
    scanf("%d", &n);
    printf("");
    hanoi_tower(n, 'A', 'B', 'C');


}