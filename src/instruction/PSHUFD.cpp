#include "PSHUFD.h"
int CPSHUFD::my_init(void *p)
{
	this->name = "CPSHUFD";
	this->alias = "PSHUFD";
	return 0;
}

CPSHUFD::CPSHUFD()
{
	this->my_init();
}

CPSHUFD::~CPSHUFD()
{

}
