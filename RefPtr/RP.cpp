#include <iostream>
using namespace std;

int main(void) {
	int num = 12;
	int* ptr = &num; //ptr은 num의 주소를 가리킨다. *ptr은 num의 주소의 값이다(=num의 값)
	int** dptr = &ptr; // *dptr은 ptr의 값을 가리킨다. **dptr은 ptr의 값이다 이는 num의 값이다.

	int& ref = num; //ref==num이다.
	int* (&pref) = ptr;
	int** (&dpref) = dptr;

	//num = *ptr = **dptr  | ref;
	//ptr = &num = *dptr   | &ref=*(&pref)=**(&dpref)
	//dptr = &ptr		   | *(&dpref) = &pref;
	//&dpref;



	

}