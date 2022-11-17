#include <iostream>
using namespace std;
// 오늘의 주제 : 반복문
// 
int main()
{
#pragma region while문/do-while문
	//// while ~동안에
	//// if-else 굉장히 유용하다
	//// 하지만 한 번만 실행하는게 아니라, 특정 조건까지 계속 반복해야 하는 상황
	//// ex) 게임을 끌 때까지 계속 게임을 실행해라
	//// ex) 목적지에 도달할때까지~ 계속 이동하라

	//int count = 0;

	////while (count < 5)
	////{
	////	cout << "Hello World!" << endl;
	////	count++;
	////}

	//// do-while과 while의 차이?
	//// do-while은 한번은 무조건 실행, while은 조건문이 만족하지 않으면 실행하지 않음
	//// do-while은 사용빈도가 높지 않으므로 while을 기억하되 읽을줄은 알아야 함
	//do
	//{
	//	cout << "Hello World!" << endl;
	//	count++;
	//} while (false/* count < 5*/);
	//// while안의 조건을 false로 놓아도 한 번은 실행함
#pragma endregion

#pragma region for문
//for (int count = 0; count < 5; count++)
//{
//	cout << "Hello World!" << endl;
// }
//	
//	// 그렇다면 언제 for문, 언제 while문을 쓰는가?
//	// 횟수가 정해져있다면, for문을 사용!
#pragma endregion

#pragma region break/continue
	//// break; continue;

	//// 루프문의 흐름 제어 break continue
	//int round = 1;
	//int hp = 100;
	//int damage = 26;

	//// 무한 루프 : 전투 시작
	//while (true)
	//{
	//	hp -= damage;
	//	if (hp < 0)
	//		hp = 0; // 음수 체력을 0으로 보정

	//	// 시스템 메시지
	//	cout << "Round " << round << " 몬스터 체력 " << hp << endl;

	//	if (hp == 0)
	//	{
	//		cout << "몬스터 처치!" << endl;
	//		break;
	//	}

	//	if (round == 5)
	//	{
	//		cout << "제한 라운드 종료" << endl;
	//		break;
	//	}

	//	round++;
	//}
#pragma endregion

#pragma region 홀수 출력 예시문제

	//// 1~10 사이의 홀수만 출력하기

	//for (int count = 1; count <= 10; count++)
	//{
	//	bool isEven = ((count % 2) == 0);

	//	if (isEven)
	//		continue;

	//	cout << count << endl;
	//}
#pragma endregion

#pragma region 별찍기
	//// 별찍기
	//// 유저들이 어떤 정수를 입력하면
	//// N*N개의 별을 찍었으면 좋겠어요.
	//int input;

	//// 내 풀이
	//cout << "N*N개의 별을 찍기 위한 N을 입력하세요 : ";
	//cin >> input;
	//
	//for (int i = 0; i < input; i++)
	//{
	//	for (int j = 0; j < input; j++)
	//	{
	//		cout << "*";
	//	}
	//	cout << endl;
	//}
#pragma endregion

#pragma region 별찍기2
//// 별찍기2)
//// 음.. 그냥 N*N개의 별을 찍으니까 너무 심심하다
//// 1개부터 시작해서 순차적으로 줄마다 증가하게 수정해주세요!
//int input;
//cin >> input;
//for (int i = 0; i < input; i++)
//{
//	for (int j = 0; j < i+1; j++)
//	{
//		cout << "*";
//	}
//	cout << endl;
//}

#pragma endregion

#pragma region 별찍기3
//// 별찍기3
//// 모양이 많이 개선되긴 했는데..
//// N개부터 시작해서 줄마다 1개씩 줄어드는 형태로!
//
//int input;
//cin >> input;
//
//for (int i = 0; i < input; i++)
//{
//	// 0번째줄 = 4개
//	// 1번째줄 = 3개
//	// 2번째줄 = 2개
//	// i번째줄 = 4-i개
//	for (int j = 0; j < (input - i); j++)
//	{
//		cout << "*";
//	}
//	cout << endl;
//}
#pragma endregion

#pragma region 구구단
// 구구단
// 2*1=2
// 2단부터 9단까지 구구단을 출력해주세요.

for (int i = 2; i <= 9; i++)
{
	for (int j = 1; j <= 9; j++)
	{
		int answer = i * j;;
		cout << i << "*" << j << "=" << answer << endl;
	}
}
#pragma endregion
}
