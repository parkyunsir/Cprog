#include <iostream>
using namespace std;

int main(void) 
{
	int n1 = 1020;
	int& n2 = n1; //n2: n1야! 우리 같은 주소값을 쓰자. 같은 값을 같자.

	n2 = 3047;
	cout << "n1 값: " << n1 << endl;
	cout << "n2 값: " << n2 << endl;

	cout << "n1 참조: " << &n1 << endl;
	cout << "n2 참조: " << &n2 << endl;
	return 0;
}