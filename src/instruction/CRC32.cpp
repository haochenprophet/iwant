#include "CRC32.h"
int CCRC32::my_init(void *p)
{
	this->name = "CCRC32";
	this->alias = "CRC32";
	return 0;
}

CCRC32::CCRC32()
{
	this->my_init();
}

CCRC32::~CCRC32()
{

}
