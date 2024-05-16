#include <iostream>
#include <cmath>  // for rand( )
#include "health2.h"

CHealth2::CHealth2(int a) { age = a; }

// constructors

inline CHealth2::CHealth2() { nCHealth++; age = 20; beat5min = temp5min = nullptr; }
CHealth2::~CHealth2() {
	nCHealth--;
	cout << "  count " << nCHealth << endl;
	if (beat5min != nullptr) delete beat5min;
	if (temp5min != nullptr) delete temp5min;
	else cout << " no allocated memory \n";
}
int CHealth2::nCHealth = 0;

// private member function

inline void CHealth2::cel2faren() { faren = cel * 9.0 / 5.0 + 32.0; }
inline void CHealth2::GetHealthAge() { healthAge = beat / pressure; }
void CHealth2::GetBMI() { BMIvalue = weight / height / height; }
 void CHealth2::faren2cel() { cel = (faren - 32) * 5.0 / 9.0; }

 void CHealth2::measure(int a) { age = a;   measure(); }
 void CHealth2::measure() {
	cel = rand() % 10 + 30.0; 	cel2faren();  // private function
	height = 1.6 + (rand() % 30) / 10.0;
	weight = 50. + rand() % 30;
	beat = 70 + rand() % 15;
	pressure = 90. + rand() % 30;
	GetBMI();      	GetHealthAge();
}
int CHealth2::run5min() {
	int nn = 5 * 60;  // every seconds for 5minutes
	if (beat5min == nullptr) beat5min = new float[nn];
	if (temp5min == nullptr) temp5min = new float[nn];;
	for (int n = 0; n < nn; n++) {
		beat5min[n] = 80 + rand() % 20;
		temp5min[n] = 35 + rand() % 5;
		if (temp5min[n] > 41 || beat5min[n] > 101)  return -1;
	}
	return 1;
}
