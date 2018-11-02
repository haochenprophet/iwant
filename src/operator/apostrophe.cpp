#include "apostrophe.h"
int Capostrophe::my_init(void *p)
{
	this->name = "Capostrophe";
	this->alias = "apostrophe";
	this->symbol = "'...'";
	return 0;
}

Capostrophe::Capostrophe()
{
	this->my_init();
}

Capostrophe::~Capostrophe()
{

}
