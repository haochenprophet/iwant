#include "spaceport_record.h"
int Cspaceport_record::my_init(void *p)
{
	this->name = "Cspaceport_record";
	this->alias = "spaceport_record";
	return 0;
}

Cspaceport_record::Cspaceport_record()
{
	this->my_init();
}

Cspaceport_record::~Cspaceport_record()
{

}

#ifndef SPACEPORT_RECORD_TEST
#define SPACEPORT_RECORD_TEST 0//1
#endif

#if SPACEPORT_RECORD_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
