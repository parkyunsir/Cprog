#include <iostream>
using namespace std;

int main(void) 
{
	int n1 = 1020;
	int& n2 = n1; //n2: n1��! �츮 ���� �ּҰ��� ����. ���� ���� ����.

	n2 = 3047;
	cout << "n1 ��: " << n1 << endl;
	cout << "n2 ��: " << n2 << endl;

	cout << "n1 ����: " << &n1 << endl;
	cout << "n2 ����: " << &n2 << endl;
	return 0;
}