#include "mars_cmaterial.h"
int Cmars_cmaterial::my_init(void *p)
{
	this->name = "Cmars_cmaterial";
	this->alias = "mars_cmaterial";
	return 0;
}

Cmars_cmaterial::Cmars_cmaterial()
{
	this->my_init();
}

Cmars_cmaterial::~Cmars_cmaterial()
{

}

#ifndef MARS_CMATERIAL_TEST
#define MARS_CMATERIAL_TEST 0//1
#endif

#if MARS_CMATERIAL_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
