#include "type_conversion.h"
int Ctype_conversion::my_init(void *p)
{
	this->name = "Ctype_conversion";
	this->alias = "type_conversion";
	this->symbol = "()";
	return 0;
}

Ctype_conversion::Ctype_conversion()
{
	this->my_init();
}

Ctype_conversion::~Ctype_conversion()
{

}
