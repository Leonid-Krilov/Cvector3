#include "Cvector3.h"

Cvector3::Cvector3()
{

}

Cvector3::Cvector3(double x, double y, double z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

Cvector3::~Cvector3()
{

}

void Cvector3::VectorInfo()
{
	std::cout << "\nX = " << x << "\nY = " << y << "\nZ = " << z;
}
