/*
	����(���̵� ��). 
	uav ������ �浹ȸ�� �ùķ��̼��� �����Ϸ��� �Ѵ�.
	uav ������ �浹�� �����ϱ� ���ؼ��� ��е� ������ �Ÿ��� �� ��(second) ���� Ȯ���� �� �־�� �ϰ�,
	�ִܰŸ��� ���� uav 2���� �����Ͽ� �� uav�� ������ ����߸����� �Ѵ�. 
	10�� ���� uav���� �������� Ȯ���غ���.

	���� ����
	
	uav 5��� uav���� ��ǥ�� �����Ѵ�.

	uav 1 (x: 10, y: 25)
	uav 2 (x: 10, y: 50)
	uav 3 (x: 15, y: 121)
	uav 4 (x: 30, y: 17)
	uav 5 (x: 23, y: 35)
(
	1. �� uav���� ��ǥ�� set_position(float x, float y) �Լ��� ���ؼ� �Է��� �޴´�.

	2. ���ʸ��� uav���� x������ 1���� 10 (����)��ŭ y������ 1���� 5(����)��ŭ ���Ƿ� �̵��� �� �ִ�.

	3. ��ǥ, �Ÿ� ���� �Ǽ����̴�.

	4. uav�� ��ǥ ������ static ������ �����Ѵ�.

	�ذ���� a. 0�ʺ��� 10�ʱ����� uav���� ��ǥ�� ���Ͻÿ�.

	�ذ���� b. �� Second ���� �� uav ������ �Ÿ��� ����Ѵ�.

	�ذ���� c. ���� �ִ� �Ÿ��� ���� �� uav�� �����Ѵ�. ���⼭ ������ uav 2���� uav A, uav B��� �Ѵٸ�,
				A�� x������ 1~5(����)��ŭ B�� -5~ -1 (����)��ŭ ���Ƿ� �̵������ش�.
	
	�ذ���� d. ���� �Ÿ��� 1�̸��� ��� '�浹' �� ����ϰ� �ùķ��̼��� �����Ѵ�.
	

	set_position(float x, float y) - uav�� ��ǥ�� �����ϴ� �Լ�
	cal_distance(float x1, float y1, float x2, float y2) - uav ������ �Ÿ��� ���ϴ� �Լ�



	��¿���:

	*********0��*********** (���� �������)
	uav1(10,25)
	uav2(10,50)
	uav3(15,121)
	uav4(30,17)
	uav5(23,35)

	uav1-uav2 �Ÿ� :
	uav1-uav3 �Ÿ� :
	uav1-uav4 �Ÿ� :
	uav1-uav5 �Ÿ� :
	uav2-uav3 �Ÿ� :

	uav2 - uav3 �ִܰŸ� : 
	uav2 - (3,2) uav3 -(-5,-1)��ŭ �߰� �̵�


	...

	********10��*************
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
		
		// ��ǥ ���


		// ���� �� ���� �� �� ��ǥ ����


		// �� uav ������ �Ÿ��� ���


		//�ִܰŸ� uav ����


		//�����̵�







		//�浹����
		if



		if (sec ==10) {
			flag = 0;

		}
		sec = sec + 1;
	}





}