#include <iostream>
using namespace std;

void SwapByRef2(int& r1,int &r2)
{
	int temp = r1;
	r1 = r2;
	r2 = temp;
}

int main(void) {
	int va11 = 10;
	int val2 = 20;

	SwapByRef2(va11, val2);
	cout << "val1: " << va11 << "\nval2: " << val2 << endl;
	return 0;
}