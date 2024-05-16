#include <iostream>
using namespace std;
class a {
public:
	a() { i++; aa = NULL; cout << i << " con\n"; }
	~a();
	float x, y, * aa;
	static int i;
};
int a::i = 0;
a::~a() {
	if (aa != NULL) {
		delete[] aa;
		cout << i << " done \n";
		aa = NULL;
	}
	else { cout << i << " none \n"; }
	i--;
}

int main()
{
	{
		a cc;
		cc.aa = new float[123];
	}

	return 0;
}