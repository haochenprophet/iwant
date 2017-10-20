#include "KTESTW.h"
int CKTESTW::my_init(void *p)
{
	this->name = "CKTESTW";
	this->alias = "KTESTW";
	return 0;
}

CKTESTW::CKTESTW()
{
	this->my_init();
}

CKTESTW::~CKTESTW()
{

}
