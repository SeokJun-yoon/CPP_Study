#include <iostream>
using namespace std;

// 오늘의 주제 : 함수(프로시저, 메소드, 루틴)

/*

input으로 무엇을 받고,  output으로 무엇을 받을지 정해준다.

반환타입 함수이름([인자타입 매개변수])
{
	함수 내용

	return ~~~;

}

*/

// Hello World를 콘솔에 출력하는 함수를 만들어보자!
// input : 없음 / output : 없음
// 타입 : int float double char-- void

void PrintHelloWorld()
{
	cout << "Hello World" << endl;
}

int MultiplyBy(int a, int b)
{
	int result = a * b;
	return result;
}

void PrintNumber(int number)
{
	cout << "넘겨주신 숫자는 " << number << " 입니다." << endl;
}

int main()
{
	int a = 3;
	int b = 5;
	int result = MultiplyBy(b, a);

	PrintNumber(result);
	//PrintHelloWorld();

	return 0;
}
