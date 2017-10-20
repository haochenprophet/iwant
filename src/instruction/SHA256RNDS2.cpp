#include "SHA256RNDS2.h"
int CSHA256RNDS2::my_init(void *p)
{
	this->name = "CSHA256RNDS2";
	this->alias = "SHA256RNDS2";
	return 0;
}

CSHA256RNDS2::CSHA256RNDS2()
{
	this->my_init();
}

CSHA256RNDS2::~CSHA256RNDS2()
{

}
