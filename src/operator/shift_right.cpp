#include "shift_right.h"
int Cshift_right::my_init(void *p)
{
	this->name = "Cshift_right";
	this->alias = "shift_right";
	this->symbol = ">>";
	return 0;
}

Cshift_right::Cshift_right()
{
	this->my_init();
}

Cshift_right::~Cshift_right()
{

}
