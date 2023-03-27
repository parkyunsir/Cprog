#include <iostream>
using namespace std;

void PlusOne(int& n) {
	n++;
}

void Switching(int& n) {
	n = n * (-1);
}

int main(void) {
	int num = 10;
	PlusOne(num);
	cout << num << endl;

	Switching(num);
	cout << num;
	return 0;
}
