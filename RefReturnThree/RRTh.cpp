#include <iostream>
using namespace std;

//int&�� �ƴ϶� int RefRetFunTwo
int RefRetFunTwo(int& ref) {
	ref++;
	return ref;
}

int main(void) {
	int num1 = 1;
	int num2 = RefRetFunTwo(num1);

	num1++;
	num2+=50; //Two �Լ��� ������� �����Ϸ��� 100�� �ƴ� 50 ����

	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;


	return 0;
}