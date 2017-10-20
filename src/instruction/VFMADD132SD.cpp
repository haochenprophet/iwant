#include "VFMADD132SD.h"
int CVFMADD132SD::my_init(void *p)
{
	this->name = "CVFMADD132SD";
	this->alias = "VFMADD132SD";
	return 0;
}

CVFMADD132SD::CVFMADD132SD()
{
	this->my_init();
}

CVFMADD132SD::~CVFMADD132SD()
{

}
