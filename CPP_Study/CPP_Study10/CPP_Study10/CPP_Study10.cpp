#include <iostream>
using namespace std;
int MultiplyBy(int a, int b)
{
	int c = a * b;
	return c;
}

void PrintNumber(int result)
{
	cout << "넘겨진 숫자는 " << result << " 입니다." << endl;
}

// F5.
// F10, 프로시저 단위 코드 실행. 함수가 하는 세부적인 기능까지 접근하지는 않음.
// F11, 한 단계씩 코드 실행. 함수 안쪽까지 접근한다.

int main()
{
	int a = 3;
	int b = 5;
	int result = MultiplyBy(b, a);

	PrintNumber(result);
	
	return 0;
}