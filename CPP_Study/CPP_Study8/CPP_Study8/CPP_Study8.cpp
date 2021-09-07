﻿#include <iostream>
#include <time.h>
using namespace std;

// 상수인건 알겠는데. 너무 따로 따로 노는 느낌?
// 하나의 셋트인데?
const int SCISSORS = 1;
const int ROCK = 2;
const int PAPER = 3;

// 열거형
// 숫자를 지정 안하면 첫 값은 0부터 시작
// 그 다음 값들은 이전 값 + 1
enum ENUM_SRP
{
	ENUM_SCISSORS,
	ENUM_ROCK,
	ENUM_PAPER
};


// #이 붙은 거 -> 전처리 지시문
// #include <iostream>이라는 파일을 찾아서 해당 내용을 그냥 복붙
// 1) 전처리 2) 컴파일 3) 링크
#define DEFINE_SCISSORS 1
#define DEFINE_TEST cout << "Hello World" << endl;

int main()
{
	srand(time(NULL)); // 시드 설정
	int my_get = 0;

//내가 짠 가위바위보
	// 내가 짠 알고리즘
	// 위에서 실시한 시드를 %3을 이용하여 0,1,2의 값만 가지고 컴퓨터가 낼 가짓수 설정
	// while(1)을 이용해 무한루프 설정 후,
	// 내부에서 switch-case 사용 하여
	// 내가 낸 가위/바위/보와 컴퓨터의 가위/바위/보를 비교하여 결과 출력
	//while (1)	// 무한 루프 설정
	//{
	//	int com_get = rand() % 3;
	//	cout << "< 낼 것을 결정하세요 (0:가위, 1:바위, 2:보, 3: 종료) : " << endl;
	//	cin >> my_get;
	//	//cout << com_get << endl; // 컴퓨터 입력값 체크용
	//	switch (my_get)
	//	{
	//	case 0:
	//		if (com_get == 0) {
	//			cout << "<< 컴퓨터가 낸 것 : 가위 >>" << endl;
	//			cout << "<< 비겼습니다! >>" << endl;
	//			break;
	//		}
	//		else if (com_get == 1) {
	//			cout << "<< 컴퓨터가 낸 것 : 바위 >>" << endl;
	//			cout << "<< 플레이어가 졌습니다! >>" << endl;
	//			break;
	//		}
	//		else {
	//			cout << "<< 컴퓨터가 낸 것 : 보 >>" << endl;
	//			cout << "<< 플레이어가 이겼습니다! >>" << endl;
	//			break;
	//		}

	//	case 1:
	//		if (com_get == 0) {
	//			cout << "<< 컴퓨터가 낸 것 : 가위 >>" << endl;
	//			cout << "<< 플레이어가 이겼습니다! >>" << endl;
	//			break;
	//		}
	//		else if (com_get == 1) {
	//			cout << "<< 컴퓨터가 낸 것 : 바위 >>" << endl;
	//			cout << "<< 비겼습니다! >>" << endl;
	//			break;
	//		}
	//		else {
	//			cout << "<< 컴퓨터가 낸 것 : 보 >>" << endl;
	//			cout << "<< 플레이어가 졌습니다! >>" << endl;
	//			break;
	//		}

	//	case 2:
	//		if (com_get == 0) {
	//			cout << "<< 컴퓨터가 낸 것 : 가위 >>" << endl;
	//			cout << "<< 플레이어가 졌습니다! >>" << endl;
	//			break;
	//		}
	//		else if (com_get == 1) {
	//			cout << "<< 컴퓨터가 낸 것 : 바위 >>" << endl;
	//			cout << "<< 플레이어가 이겼습니다! >>" << endl;
	//			break;
	//		}
	//		else {
	//			cout << "<< 컴퓨터가 낸 것 : 보 >>" << endl;
	//			cout << "<< 비겼습니다! >>" << endl;
	//			break;
	//		}

	//	case 3:
	//		return 0;
	//	}
	//}

// 강의에서 짠 가위바위보

	int wins = 0;
	int total = 0;

	while (true)
	{
		cout << "가위(1) 바위(2) 보(3) 골라주세요!" << endl;
		cout << ">";
		if (total == 0)
		{
			cout << "현재 승률 : 없음" << endl;
		}
		else
		{
			// TODO : 확률을 구해준다
			// (1*100) / 4 = 25
			int winPercentage = (wins * 100) / total; // 승률?
			cout << "현재 승률 : " << winPercentage << endl;
		}
		// 컴퓨터
		int computerValue = 1 + (rand() % 3);

		// 사용자
		int input;
		cin >> input;

		if (input == SCISSORS)
		{
			switch(computerValue)
			{
			case SCISSORS:
				cout << "가위(님) vs 가위(컴퓨터) 비겼습니다!" << endl;
				break;
			case ROCK:
				cout << "가위(님) vs 바위(컴퓨터) 졌습니다!" << endl;
				total++;
				break;
			case PAPER:
				cout << "가위(님) vs 보(컴퓨터) 이겼습니다!" << endl;
				wins++;
				total++;
				break;
			}
		}
		else if (input == ROCK)
		{
			switch (computerValue)
			{
			case SCISSORS:
				cout << "바위(님) vs 가위(컴퓨터) 이겼습니다!" << endl;
				wins++;
				total++;
				break;
			case ROCK:
				cout << "바위(님) vs 바위(컴퓨터) 비겼습니다!" << endl;
				break;
			case PAPER:
				cout << "바위(님) vs 보(컴퓨터) 졌습니다!" << endl;
				total++;
				break;
			}
		}
		else if (input == PAPER)
		{
			switch (computerValue)
			{
			case SCISSORS:
				cout << "보(님) vs 가위(컴퓨터) 졌습니다!" << endl;
				total++;
				break;
			case ROCK:
				cout << "보(님) vs 바위(컴퓨터) 이겼습니다!" << endl;
				wins++;
				total++;
				break;
			case PAPER:
				cout << "보(님) vs 보(컴퓨터) 비겼습니다!" << endl;
				break;
			}
		}
		else
		{
			break;
		}
	}
}

