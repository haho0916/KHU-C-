#include <iostream>
#include "store.h"
using namespace std; 


int main()
{
	/*fruit apple, pear, peach, mango;
	pear = fruit(300, 5);
	peach = fruit(1000, 5);
	mango = fruit(700, 8);


	cout << apple.show() << endl; 
	cout << pear.show() << endl; 
	cout << peach.show() << endl; 
	cout << mango.show() << endl; 
	cout << peach.day << endl; */

	store A, B;
	B = store(3, 4, 5, 6, 100, 200, 300, 400);
	cout << A.total() << endl; 
	cout << B.total() << endl; 
	cout << "A peach " << A.peach.price << endl; 



	return 0; 
}