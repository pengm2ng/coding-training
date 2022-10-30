/*
	문제(난이도 상). 
	uav 끼리의 충돌회피 시뮬레이션을 제작하려고 한다.
	uav 끼리의 충돌을 방지하기 위해서는 드론들 사이의 거리를 매 초(second) 마다 확인할 수 있어야 하고,
	최단거리를 가진 uav 2개를 선정하여 두 uav의 간격을 떨어뜨리고자 한다. 
	10초 동안 uav들의 움직임을 확인해보자.

	문제 조건
	
	uav 5대와 uav들의 좌표가 존재한다.

	uav 1 (x: 10, y: 25)
	uav 2 (x: 10, y: 50)
	uav 3 (x: 15, y: 121)
	uav 4 (x: 30, y: 17)
	uav 5 (x: 23, y: 35)
(
	1. 각 uav들의 좌표를 set_position(float x, float y) 함수를 통해서 입력을 받는다.

	2. 매초마다 uav들은 x축으로 1부터 10 (정수)만큼 y축으로 1부터 5(정수)만큼 임의로 이동할 수 있다.

	3. 좌표, 거리 값은 실수형이다.

	4. uav의 좌표 변수는 static 변수로 지정한다.

	해결사항 a. 0초부터 10초까지의 uav들의 좌표를 구하시오.

	해결사항 b. 매 Second 마다 각 uav 사이의 거리를 출력한다.

	해결사항 c. 가장 최단 거리를 가진 두 uav를 선정한다. 여기서 선정된 uav 2개를 uav A, uav B라고 한다면,
				A는 x축으로 1~5(정수)만큼 B는 -5~ -1 (정수)만큼 임의로 이동시켜준다.
	
	해결사항 d. 만약 거리가 1미만일 경우 '충돌' 을 출력하고 시뮬레이션을 종료한다.
	

	set_position(float x, float y) - uav의 좌표를 설정하는 함수
	cal_distance(float x1, float y1, float x2, float y2) - uav 사이의 거리를 구하는 함수



	출력예시:

	*********0초*********** (형식 상관없음)
	uav1(10,25)
	uav2(10,50)
	uav3(15,121)
	uav4(30,17)
	uav5(23,35)

	uav1-uav2 거리 :
	uav1-uav3 거리 :
	uav1-uav4 거리 :
	uav1-uav5 거리 :
	uav2-uav3 거리 :

	uav2 - uav3 최단거리 : 
	uav2 - (3,2) uav3 -(-5,-1)만큼 추가 이동


	...

	********10초*************
	uav1(10,25)
	uav2(10,50)
	uav3(15,121)
	uav4(30,17)
	uav5(23,35)

	



*/

#include <stdio.h>

void set_position(float x, float y, float uavx, float uavy) {
	uavx = x;
	uavy = y;

}

float cal_distance(float x1, float y1, float x2, float y2) {



}
static float uav1x;
static float uav1y;
static float uav2x;
static float uav2y;
static float uav3x;
static float uav3y;
static float uav4x;
static float uav4y;
static float uav5x;
static float uav5y;


int main() {
	
	int sec = 0;
	int flag = 1;
	set_position(10, 25, uav1x, uav1y);
	set_position(10, 50, uav2x, uav2y);
	set_position(15, 121, uav3x, uav3y);
	set_position(30, 17, uav4x, uav4y);

	while (flag) {
		
		// 좌표 출력


		// 랜덤 값 생성 후 각 좌표 갱신


		// 각 uav 사이의 거리를 출력


		//최단거리 uav 선정


		//랜덤이동







		//충돌조건
		if



		if (sec ==10) {
			flag = 0;

		}
		sec = sec + 1;
	}





}