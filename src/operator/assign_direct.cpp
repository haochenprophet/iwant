#include "assign_direct.h"
int Cassign_direct::my_init(void *p)
{
	this->name = "Cassign_direct";
	this->alias = "assign_direct";
	this->symbol = "=";
	return 0;
}

Cassign_direct::Cassign_direct()
{
	this->my_init();
}

Cassign_direct::~Cassign_direct()
{

}
