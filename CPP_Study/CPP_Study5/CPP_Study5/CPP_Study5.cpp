
#include <iostream>
using namespace std;

// 오늘의 주제 : 유의사항

// 1) 변수의 유효범위

// 전역변수
// int hp = 10;

// 스택
// { } 중괄호의 범위가 생존 범위
// 같은 이름 두번 사용할 때 문제


// 2) 연산 우선순위
// plus memo) 연산마다 다른 우선순위를 가지므로, 문제가 발생하지 않도록 괄호를 통해 구분할 것.

// 3) 타입 변환

int main()
{
	// 1) 스택 예시
	int hp = 77777;

	//2) 연산 우선순위 예시
	// 짝수 여부
	bool isEven = ((hp % 2) == 0);

	// 짝수거나 3으로 나뉘는 값인지
	bool isEvenOrDivBy3 = ((hp % 2) == 0) || ((hp % 3) == 0);

	// 3) 타입 변환 예시

	// 바구니 교체
	short hp2 = hp; // 윗쪽 비트 데이터가 짤린 상태로 저장
	float hp3 = hp; // 실수로 변환할 때 정밀도 차이가 있기 때문에 데이터 손실
	unsigned int hp4 = hp;

}

