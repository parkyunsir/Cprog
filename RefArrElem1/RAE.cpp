#include <iostream>
using namespace std;

int main(void) {
	int arr[3] = { 1,2,3 };
	int& ref1 = arr[0];
	int& ref2 = arr[1];
	int& ref3 = arr[2];

	cout << ref1 << " " << ref2 << " " << ref3 << endl;

}