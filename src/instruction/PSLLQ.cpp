#include "PSLLQ.h"
int CPSLLQ::my_init(void *p)
{
	this->name = "CPSLLQ";
	this->alias = "PSLLQ";
	return 0;
}

CPSLLQ::CPSLLQ()
{
	this->my_init();
}

CPSLLQ::~CPSLLQ()
{

}
