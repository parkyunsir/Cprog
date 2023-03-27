#include <iostream>
using namespace std;

void SwapPointer(int& n1, int& n2) {
	int temp;
	temp = n1;
	n1 = n2;
	n2 = temp;
}

int main(void) {
	int num1 = 5;
	int* prt1 = &num1;

	int num2 = 10;
	int* ptr2 = &num2;

	cout << "num1: " << num1 << ", num2: " << num2 << endl;
	
	SwapPointer(num1, num2);

	cout << "num1: " << num1 << ", num2: " << num2 << endl;
	
	return 0;
}