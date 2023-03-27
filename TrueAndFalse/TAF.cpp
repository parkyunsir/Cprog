#include <iostream>
using namespace std;

int main(void) {
	int num = 10;
	int i = 0;

	cout << "true: " << true << endl; //true의 값에 1이 있다. 그치만 true은 1이 아니다.
	cout << "false: " << false << endl;

	while (true) {
		cout << i << ' ';
		i++;
		if (i > 10) {
			cout << endl;
			break;
		}
	}
	cout << "sizeof 1: " << sizeof(1) << endl;
	cout << "sizeof 0: " << sizeof(0) << endl;
	cout << "sizeof true: " << sizeof(true) << endl;
	cout << "sizeof false: " << sizeof(false) << endl;
}