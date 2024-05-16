#pragma once
#include "fruit.h"

class store {
public: 
	store() {};
	store(int a, int b, int c,int d, float e, float f, float g,float h)
	{
		apple = fruit(e, a);
		pear = fruit(f, b);
		peach = fruit(g, c);
		mango = fruit(h, d);

	}
	store(int a, int b, int c, float d, float e, float f)
	{
		apple = fruit(d, a);
		pear = fruit(e, b);
		peach = fruit(f, c);
	}


	fruit apple, pear, peach,mango;

	store operator+(store&);
	store operator-(store&);
	void operator<(store&);
	void operator*=(int n);

	float total();
	float total(float);
	
	
};