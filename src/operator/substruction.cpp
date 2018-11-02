#include "substruction.h"
int Csubstruction::my_init(void *p)
{
	this->name = "Csubstruction";
	this->alias = "substruction";
	this->symbol = "-";
	return 0;
}

Csubstruction::Csubstruction()
{
	this->my_init();
}

Csubstruction::~Csubstruction()
{

}
