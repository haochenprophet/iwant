#include "instruction.h"
int Cinstruction::my_init(void *p)
{
	this->name = "Cinstruction";
	this->alias = "instruction";
	return 0;
}

Cinstruction::Cinstruction()
{
	this->my_init();
}

Cinstruction::~Cinstruction()
{

}
