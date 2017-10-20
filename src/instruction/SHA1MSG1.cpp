#include "SHA1MSG1.h"
int CSHA1MSG1::my_init(void *p)
{
	this->name = "CSHA1MSG1";
	this->alias = "SHA1MSG1";
	return 0;
}

CSHA1MSG1::CSHA1MSG1()
{
	this->my_init();
}

CSHA1MSG1::~CSHA1MSG1()
{

}
