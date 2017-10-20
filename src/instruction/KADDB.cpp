#include "KADDB.h"
int CKADDB::my_init(void *p)
{
	this->name = "CKADDB";
	this->alias = "KADDB";
	return 0;
}

CKADDB::CKADDB()
{
	this->my_init();
}

CKADDB::~CKADDB()
{

}
