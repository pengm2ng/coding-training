#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


void hanoi_tower(int n, char from, char temp, char to)
{
    if (n == 1)
        printf("���� 1�� %c���� %c�� �̵�\n", from, to);
    else
    {
        hanoi_tower(n - 1, from, to, temp);
        printf("���� %d�� %c���� %c�� �̵�\n", n, from, to);
        hanoi_tower(n - 1, temp, from, to);
    }
}

int main() {


    int n;
    printf("�ϳ���ž �Է� : ");
    scanf("%d", &n);
    printf("");
    hanoi_tower(n, 'A', 'B', 'C');


}