#include "life_record.h"
int Clife_record::my_init(void *p)
{
	this->name = "Clife_record";
	this->alias = "life_record";
	return 0;
}

Clife_record::Clife_record()
{
	this->my_init();
}

Clife_record::~Clife_record()
{

}

#ifndef LIFE_RECORD_TEST
#define LIFE_RECORD_TEST 0//1
#endif

#if LIFE_RECORD_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
