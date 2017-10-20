#include "SHA1RNDS4.h"
int CSHA1RNDS4::my_init(void *p)
{
	this->name = "CSHA1RNDS4";
	this->alias = "SHA1RNDS4";
	return 0;
}

CSHA1RNDS4::CSHA1RNDS4()
{
	this->my_init();
}

CSHA1RNDS4::~CSHA1RNDS4()
{

}
