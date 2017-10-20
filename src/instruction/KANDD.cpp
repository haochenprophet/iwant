#include "KANDD.h"
int CKANDD::my_init(void *p)
{
	this->name = "CKANDD";
	this->alias = "KANDD";
	return 0;
}

CKANDD::CKANDD()
{
	this->my_init();
}

CKANDD::~CKANDD()
{

}
