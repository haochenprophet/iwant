#include "KORD.h"
int CKORD::my_init(void *p)
{
	this->name = "CKORD";
	this->alias = "KORD";
	return 0;
}

CKORD::CKORD()
{
	this->my_init();
}

CKORD::~CKORD()
{

}
