#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> //strstr �Լ��� ����� ��� ����
#include <cstring> //c++�ϰ��
int main()
{
    char str[] = "fdsaklwic fool dog dog fool prat cklqwe prat";
    char fool[] = "fool";
    char prat[] = "prat";
    char dog[] = "dog";
    char* ptr = strstr(str, fool); ;

    while (ptr) {
        ptr = strstr(str, fool);  // simple�� �����ϴ� ��ġ�� ã��


        if (ptr) {

            strncpy(ptr, "****", 4);  // sample�� ����
            puts(str);


        }

        ptr = strstr(str, prat);  // simple�� �����ϴ� ��ġ�� ã��

        if (ptr) {

            strncpy(ptr, "****", 4);  // sample�� ����
            puts(str);


        }

        ptr = strstr(str, dog);  // simple�� �����ϴ� ��ġ�� ã��

        if (ptr) {

            strncpy(ptr, "***", 3);  // sample�� ����
            puts(str);


        }
    }
   

    

    return 0;
}