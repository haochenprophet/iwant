#include "delete_array.h"
int Cdelete_array::my_init(void *p)
{
	this->name = "Cdelete_array";
	this->alias = "delete_array";
	this->symbol = "delete []";
	return 0;
}

Cdelete_array::Cdelete_array()
{
	this->my_init();
}

Cdelete_array::~Cdelete_array()
{

}
