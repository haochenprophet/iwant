#include "home_record.h"
int Chome_record::my_init(void *p)
{
	this->name = "Chome_record";
	this->alias = "home_record";
	return 0;
}

Chome_record::Chome_record()
{
	this->my_init();
}

Chome_record::~Chome_record()
{

}

#ifndef HOME_RECORD_TEST
#define HOME_RECORD_TEST 0//1
#endif

#if HOME_RECORD_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
