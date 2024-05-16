	#include <iostream>
	#include "store.h"
	using namespace std;


	int main()
	{
		// operator overloads

		store A, B, C, D;
		A = store(4, 3, 3, 800, 1000, 800);
		B = store(3, 3, 4, 1000, 1200, 1000);
		C = store(0, 0, 0, 0, 0, 0, 0, 0);
		C = A + B;
		cout << A.total() << " " << B.total() << " " << C.total() << endl;
		C = A - B;
		cout << C.total();


		// *= overloads verification
		D = store(4, 3, 3, 3, 1,1,1,1);
		cout << D.total() << endl; 
		D *= 2;
		cout << D.total() << endl;
	
		return 0;	
	}