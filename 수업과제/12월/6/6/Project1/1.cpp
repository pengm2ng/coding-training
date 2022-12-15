#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int binarySearch(int list[], int* endPtr, int target, int** locPtr) {
	//이진 탐색 함수
	int* mid = list + (endPtr - list) / 2; //중간점의 주소를 찾는다. 
	if (*mid == target) { //중간점의 값이 원하는 값일 경우
		*locPtr = mid; //최종 위치에 중간점의 주소를 저장하고
		return 1; //1을 반환한다. 
	}
	else if (mid == list) { //중간점이 시작위치라면
		return 0; //0을 반환한다. (해당 배열에 없음)
	}
	else if (*mid > target) { //중간점의 값이 원하는 값보다 크면
		//시작점과 중간점을 범위로 하여 이진탐색을 다시 실행한다. 
		return binarySearch(list, mid, target, locPtr);
	}
	else if (*mid < target) { //중간점의 값이 원하는 값보다 작으면
		//중간점과 끝점을 범위로 하여 이진탐색을 다시 실행한다. 
		return binarySearch(mid, endPtr, target, locPtr);
	}
}

int main() {

	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 }; //배열 선언
	int target, check = 0;
	int* locPtr = NULL;
	scanf("%d", &target); //타겟 값 입력
	//이진탐색 실행 후 배열 내 값이 있으면 1을 반환, 아니면 0 반환
	check = binarySearch(arr, arr + sizeof(arr) / sizeof(int), target, &locPtr);

	if (check) {
		//값이 있으면 그 값을 출력한다. 
		printf("%d\n", *locPtr);
	}
	else {
		printf("값을 찾을 수 없습니다.\n");
	}
	return 0;
}