#include <iostream>
using namespace std;

// 오늘의 주제 : 지역 변수와 값 전달


// 전역 변수
int globalValue = 0;

void Test()
{
	cout << "전역 변수의 값은 : " << globalValue << endl;
}

int main()
{
	// 지역 변수
	int localValue = 0;

	return 0;
}