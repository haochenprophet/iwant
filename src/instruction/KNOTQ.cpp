#include "KNOTQ.h"
int CKNOTQ::my_init(void *p)
{
	this->name = "CKNOTQ";
	this->alias = "KNOTQ";
	return 0;
}

CKNOTQ::CKNOTQ()
{
	this->my_init();
}

CKNOTQ::~CKNOTQ()
{

}
