#include "keyword.h"
int Ckeyword::my_init(void *p)
{
	this->name = "Ckeyword";
	this->alias = "keyword";
	return 0;
}

Ckeyword::Ckeyword()
{
	this->my_init();
}
