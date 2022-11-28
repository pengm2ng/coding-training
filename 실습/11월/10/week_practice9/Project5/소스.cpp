#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> //strstr 함수가 선언된 헤더 파일
#include <cstring> //c++일경우
int main()
{
    char str[] = "fdsaklwic fool dog dog fool prat cklqwe prat";
    char fool[] = "fool";
    char prat[] = "prat";
    char dog[] = "dog";
    char* ptr = strstr(str, fool); ;

    while (ptr) {
        ptr = strstr(str, fool);  // simple이 존재하는 위치를 찾음


        if (ptr) {

            strncpy(ptr, "****", 4);  // sample로 변경
            puts(str);


        }

        ptr = strstr(str, prat);  // simple이 존재하는 위치를 찾음

        if (ptr) {

            strncpy(ptr, "****", 4);  // sample로 변경
            puts(str);


        }

        ptr = strstr(str, dog);  // simple이 존재하는 위치를 찾음

        if (ptr) {

            strncpy(ptr, "***", 3);  // sample로 변경
            puts(str);


        }
    }
   

    

    return 0;
}