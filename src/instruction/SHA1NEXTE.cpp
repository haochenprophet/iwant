#include "SHA1NEXTE.h"
int CSHA1NEXTE::my_init(void *p)
{
	this->name = "CSHA1NEXTE";
	this->alias = "SHA1NEXTE";
	return 0;
}

CSHA1NEXTE::CSHA1NEXTE()
{
	this->my_init();
}

CSHA1NEXTE::~CSHA1NEXTE()
{

}
