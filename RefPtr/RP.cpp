#include <iostream>
using namespace std;

int main(void) {
	int num = 12;
	int* ptr = &num; //ptr�� num�� �ּҸ� ����Ų��. *ptr�� num�� �ּ��� ���̴�(=num�� ��)
	int** dptr = &ptr; // *dptr�� ptr�� ���� ����Ų��. **dptr�� ptr�� ���̴� �̴� num�� ���̴�.

	int& ref = num; //ref==num�̴�.
	int* (&pref) = ptr;
	int** (&dpref) = dptr;

	//num = *ptr = **dptr  | ref;
	//ptr = &num = *dptr   | &ref=*(&pref)=**(&dpref)
	//dptr = &ptr		   | *(&dpref) = &pref;
	//&dpref;



	

}