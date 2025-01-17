﻿#include <iostream>
using namespace std;

// 오늘의 주제 : 분기문
// 데이터를 메모리에 할당하고 가공하는 방법에 대해 알아봄
// 가공한 데이터를 이용해서 무엇인가를 하고 싶다면?

int main()
{
#pragma region if/else문
    //int hp = 100; // 몬스터 HP
    //int damage = 90; // 플레이어 데미지

    //hp -= damage;

    //bool isDead = (hp <= 0); // 처치 판정

    //// 몬스터가 죽었으면 경험치 추가
    //// 어셈블리에서는 CMP, JMP

    //if (isDead) // if문 아래에 중괄호 없을시에는 바로 밑에 한줄만 인식
    //    cout << "몬스터를 처치했습니다." << endl;

    ////if (isDead == false)    // if를 두번체크하게 됨. 비효율적
    ////    cout << "몬스터가 반격했습니다." << endl;

    //else if (hp <= 20)
    //        cout << "몬스터가 도망가고 있습니다." << endl;
    //else
    //        cout << "몬스터가 반격했습니다." << endl;
#pragma endregion

#pragma region 가위바위보를 이용한 switch-case
    const int ROCK = 0;
    const int PAPER = 1;
    const int SCISSORS = 2;

    int input = ROCK;
    //if (input == ROCK)
    //    cout << "바위를 냈습니다." << endl;
    //else if (input == PAPER)
    //    cout << "보를 냈습니다." << endl;
    //else if (input == SCISSORS)
    //    cout << "가위를 냈습니다." << endl;
    //else
    //    cout << "뭘 낸겁니까?" << endl;

    // switch-case

    // 정수 계열만 넣을 수 있다.
    switch (input)
    {
    case ROCK:
        cout << "바위를 냈습니다." << endl;
        break;
    case PAPER:
        cout << "보를 냈습니다." << endl;
        break;
    case SCISSORS:
        cout << "가위를 냈습니다." << endl;
        break;
    default:
        cout << "뭘 낸겁니까?" << endl;
    }
#pragma endregion
}

