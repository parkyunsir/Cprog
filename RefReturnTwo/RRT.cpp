#include <iostream>
using namespace std;

int& RefRetFunOne(int& ref) {
	ref++;
	return ref;
}

int main(void) {
	int num1 = 1;
	//int &num2이 아니라 그냥 int num
	int num2 = RefRetFunOne(num1);

	num1++;
	num2+=100;

	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;


	return 0;
}