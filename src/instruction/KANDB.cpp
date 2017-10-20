#include "KANDB.h"
int CKANDB::my_init(void *p)
{
	this->name = "CKANDB";
	this->alias = "KANDB";
	return 0;
}

CKANDB::CKANDB()
{
	this->my_init();
}

CKANDB::~CKANDB()
{

}
