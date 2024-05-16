#include <iostream>
using namespace std;
class cc {
public:
	cc() {
		a = 2; b = 3; c = 4;
		cout << ii++ << " " << this << endl;
	};
	float a, b, c;
	static int ii;
};

int cc::ii = 0;

class A {
public:
	A() : ii(10) { M++; };
	A(int x) : ii(x) { M++; };
	int ii;
	static int M;
};

int A::M = 0;
int main() {
	cc c1, c2[2], c3, * c4;
	c4 = new cc[10];
	cc c5;
	cout << cc::ii << endl; 
	

	// array of pointers exercise

	A c, *bb[3];
	c = A(100);
	bb[0] = new A();
	bb[1] = &c;
	bb[2] = new A[5];
	cout << c.ii << " " << bb[0]->ii << endl; 
	cout << c.M << endl; 
	A d(10);

	cout << d.M << endl; 
}
