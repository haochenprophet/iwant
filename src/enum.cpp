#include "enum.h"
int Cenum::my_init(void *p)
{
	this->name = "Cenum";
	this->alias = "enum";
	this->syntax = ENUM_SYNTAX;
	return 0;
}

Cenum::Cenum()
{
	this->my_init();
}
