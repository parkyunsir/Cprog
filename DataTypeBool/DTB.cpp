/*#include <iostream>
using namespace std;

int main(void) {
	bool a = false;

	if (a==true) ¶û ¶È°°
	if (a) {					----- a°ªÀÌ 
		cout << "true" << endl; ----- true¸é ¾ê°¡ Ãâ·Â
	}
	else {						----- false¸é ¾ê°¡ Ãâ·Â
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