#include "PADDB.h"
int CPADDB::my_init(void *p)
{
	this->name = "CPADDB";
	this->alias = "PADDB";
	return 0;
}

CPADDB::CPADDB()
{
	this->my_init();
}

CPADDB::~CPADDB()
{

}
