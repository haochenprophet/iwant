#include "VPMOVSDB.h"
int CVPMOVSDB::my_init(void *p)
{
	this->name = "CVPMOVSDB";
	this->alias = "VPMOVSDB";
	return 0;
}

CVPMOVSDB::CVPMOVSDB()
{
	this->my_init();
}

CVPMOVSDB::~CVPMOVSDB()
{

}
