#include <iostream>
using namespace std;

//int&가 아니라 int RefRetFunTwo
int RefRetFunTwo(int& ref) {
	ref++;
	return ref;
}

int main(void) {
	int num1 = 1;
	int num2 = RefRetFunTwo(num1);

	num1++;
	num2+=50; //Two 함수와 결과값을 구분하려고 100이 아닌 50 대입

	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;


	return 0;
}