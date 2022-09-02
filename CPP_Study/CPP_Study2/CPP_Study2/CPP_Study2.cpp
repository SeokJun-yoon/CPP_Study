﻿#include <iostream>
using namespace std;

// 오늘의 주제 : 불리언(bool)과 실수

// 불리언(blloean) 참/거짓
bool isHighLevel = true;
bool isPlayer = true;
bool isMale = false;

// [Note]
// 사실 bool은 그냥 1바이트 정수에 불과
// 왜 정수 시간에 왜 안 다뤘을까?
// -> 일리 있음. 어셈블리에서 bool이라는 것은 없음
// bool만 봐도 참/거짓 둘 중 하나라는 힌트를 줍니다. (가독성)
int isFemale = 1;

// bool < 1바이트 정수
// - al

// 실수 (부동소수점)
// float double
// 3.1415926535
// 쩜 앞/뒤를 기준으로 16/16씩 끊으면?
// (0~65535) . (0~65535)

// 부동(不動 X) (浮動 O)소수점
// .을 유동적으로 움직여서 표현하는 방법

// 3.1415926535
// 3.1415926535 = 0.31415926535 * 10 = 314.15926535 * 10^-2
// 1) 정규화 = 0.31415926535 * 10
// 2) 31415926535 (유효숫자) 1 (지수)

// float 부호(1) 지수(8) 유효숫자(23) = 32비트 = 4바이트
// double 부호(1) 지수(11) 유효숫자(52) = 64비트 = 8바이트
float attackSpeed = -3.375f; // 4바이트
double attackSpeed2 = 134.4123; // 8바이트

// ex) -3.375라는 값을 저장
// 1) 2진수 변환 = (3) + (0.375) = 0b11 +
// 0.375 = 0.5 * 0 + 0.25 * 1 + 0.125 * 1 = 0b0.011
// 2) 정규화 0b1.1011 * 2^1
// 1(부호) 1(지수) 1011(유효숫자)
// 단 지수는 unsigned byte라고 가정하고 숫자+127 만들어줌
// 예상 결과 : 0b 1 10000000 1011000'0000'0000'0000'0000

// 프로그래밍할 때 부동소수점은 항상 '근사값'이라는것을 기억
// 1/3 = 0.333333333333333333333333333333333333
// 특히 수가 커질 수록 오차 범위도 매우 커짐
// 실수 2개를 == 으로 비교하는 것은 지양

int main()
{
    cout << isHighLevel << endl;
}
