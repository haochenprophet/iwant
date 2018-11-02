#include "new_array.h"
int Cnew_array::my_init(void *p)
{
	this->name = "Cnew_array";
	this->alias = "new_array";
	this->symbol = "new []";
	return 0;
}

Cnew_array::Cnew_array()
{
	this->my_init();
}

Cnew_array::~Cnew_array()
{

}
