#include "KTESTD.h"
int CKTESTD::my_init(void *p)
{
	this->name = "CKTESTD";
	this->alias = "KTESTD";
	return 0;
}

CKTESTD::CKTESTD()
{
	this->my_init();
}

CKTESTD::~CKTESTD()
{

}
