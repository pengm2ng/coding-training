#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef union ip_ {
    unsigned int ip_hex;
    struct {
        unsigned char a;
        unsigned char b;
        unsigned char c;
        unsigned char d;
    } ip_segment;
} IP;

int main(void) {
    IP ip = { 0 };
    scanf("%x", &ip.ip_hex);

    printf("%x\n", ip.ip_hex);
    printf("%d.%d.%d.%d\n", ip.ip_segment.a, ip.ip_segment.b, ip.ip_segment.c, ip.ip_segment.d);
    return 0;
}