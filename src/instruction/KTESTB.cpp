#include "KTESTB.h"
int CKTESTB::my_init(void *p)
{
	this->name = "CKTESTB";
	this->alias = "KTESTB";
	return 0;
}

CKTESTB::CKTESTB()
{
	this->my_init();
}

CKTESTB::~CKTESTB()
{

}
