#include <iostream>
using namespace std;
int MultiplyBy(int a, int b)
{
	int c = a * b;
	return c;
}

void PrintNumber(int result)
{
	cout << "�Ѱ��� ���ڴ� " << result << " �Դϴ�." << endl;
}

// F5.
// F10, ���ν��� ���� �ڵ� ����. �Լ��� �ϴ� �������� ��ɱ��� ���������� ����.
// F11, �� �ܰ辿 �ڵ� ����. �Լ� ���ʱ��� �����Ѵ�.

int main()
{
	int a = 3;
	int b = 5;
	int result = MultiplyBy(b, a);

	PrintNumber(result);
	
	return 0;
}