#include "shift_left.h"
int Cshift_left::my_init(void *p)
{
	this->name = "Cshift_left";
	this->alias = "shift_left";
	this->symbol = "<<";
	return 0;
}

Cshift_left::Cshift_left()
{
	this->my_init();
}

Cshift_left::~Cshift_left()
{

}
