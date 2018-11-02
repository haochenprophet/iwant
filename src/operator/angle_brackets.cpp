#include "angle_brackets.h"
int Cangle_brackets::my_init(void *p)
{
	this->name = "Cangle_brackets";
	this->alias = "angle_brackets";
	this->symbol = "<...>";
	return 0;
}

Cangle_brackets::Cangle_brackets()
{
	this->my_init();
}

Cangle_brackets::~Cangle_brackets()
{

}
