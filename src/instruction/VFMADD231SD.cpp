#include "VFMADD231SD.h"
int CVFMADD231SD::my_init(void *p)
{
	this->name = "CVFMADD231SD";
	this->alias = "VFMADD231SD";
	return 0;
}

CVFMADD231SD::CVFMADD231SD()
{
	this->my_init();
}

CVFMADD231SD::~CVFMADD231SD()
{

}
