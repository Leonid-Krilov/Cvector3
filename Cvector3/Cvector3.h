#pragma once
#include <iostream>

class Cvector3
{
public:
	Cvector3();
	Cvector3(double x, double y, double z);

	~Cvector3();

	void VectorInfo();

private:
	double x;
	double y;
	double z;
};