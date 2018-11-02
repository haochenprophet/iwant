#include "semicolon_operator.h"
int Csemicolon_operator::my_init(void *p)
{
	this->name = "Csemicolon_operator";
	this->alias = "semicolon_operator";
	this->symbol = ";";
	return 0;
}

Csemicolon_operator::Csemicolon_operator()
{
	this->my_init();
}

Csemicolon_operator::~Csemicolon_operator()
{

}
