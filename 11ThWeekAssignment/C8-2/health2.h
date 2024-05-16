#pragma once
using namespace std;
class CHealth2 {
public:
	// constructors
	CHealth2();;
	CHealth2(int a);
	// destructor
	~CHealth2();
	// member data
	static int nCHealth;
	float height, cel, faren, beat, pressure;
	float BMIvalue, healthAge;
	float* beat5min, * temp5min;
	// member functions (methods)
	void measure();
	void measure(int);
	int  run5min();  // -1 emmergency
private:
	// private member data
	int age;
	float weight;
	// private member function
	void cel2faren();
	void faren2cel();
	void GetHealthAge();
	void GetBMI();
};