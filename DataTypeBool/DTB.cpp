/*#include <iostream>
using namespace std;

int main(void) {
	bool a = false;

	if (a==true) �� �Ȱ�
	if (a) {					----- a���� 
		cout << "true" << endl; ----- true�� �갡 ���
	}
	else {						----- false�� �갡 ���
		cout << "false" << endl;
	}
}
*/

#include <iostream>
using namespace std;

bool PosNag(int n) {
	if (n > 0) {
		return true;
	}
	else
		return false;
}

int main(void) {
	
	int num;
	cout << "Pos? Nag?\nEnter number: ";
	cin >> num;

	bool b = PosNag(num);
	if (b) {
		cout << "Positive number";
	}
	else
		cout << "Nagative number";

}