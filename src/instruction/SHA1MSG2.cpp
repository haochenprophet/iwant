#include "SHA1MSG2.h"
int CSHA1MSG2::my_init(void *p)
{
	this->name = "CSHA1MSG2";
	this->alias = "SHA1MSG2";
	return 0;
}

CSHA1MSG2::CSHA1MSG2()
{
	this->my_init();
}

CSHA1MSG2::~CSHA1MSG2()
{

}
