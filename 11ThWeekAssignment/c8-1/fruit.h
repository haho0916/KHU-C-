#pragma once
#include <iostream>
class fruit
{
public:

	fruit()
	{
		price = 200;
		many = 2;
		day = 12;
	}
	fruit(float p, int n)
	{
		price = p;
		many = n;
		day = 12;

	}
	fruit(float p, int n, int m)
	{
		price = p;
		many = n;
		day = m;
	}

	int many, day;
	float price;
	
	float operator*(float);




	float show();
	void show_all();

};