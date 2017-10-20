#include "VPERMI2D.h"
int CVPERMI2D::my_init(void *p)
{
	this->name = "CVPERMI2D";
	this->alias = "VPERMI2D";
	return 0;
}

CVPERMI2D::CVPERMI2D()
{
	this->my_init();
}

CVPERMI2D::~CVPERMI2D()
{

}
