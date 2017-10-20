#include "KTESTQ.h"
int CKTESTQ::my_init(void *p)
{
	this->name = "CKTESTQ";
	this->alias = "KTESTQ";
	return 0;
}

CKTESTQ::CKTESTQ()
{
	this->my_init();
}

CKTESTQ::~CKTESTQ()
{

}
