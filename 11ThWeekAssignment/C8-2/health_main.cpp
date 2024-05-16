#include <iostream>
#include "health.h"
using namespace std;
int main() {
	CHealth VIP(65), * mario, VIP2(70), * micky;
	mario = new CHealth(70);
	micky = new CHealth(80);


	cout << "  " << VIP.age << "  " << mario->age << endl;

	VIP.measureCel();
	mario->measureCel();

	cout << "  " << VIP.cel << "C  " << mario->faren << "F \n";
	cout << "  size " << sizeof(CHealth) << "\n";
	getchar();

	return 0;
}