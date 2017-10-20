#include "PSLLW.h"
int CPSLLW::my_init(void *p)
{
	this->name = "CPSLLW";
	this->alias = "PSLLW";
	return 0;
}

CPSLLW::CPSLLW()
{
	this->my_init();
}

CPSLLW::~CPSLLW()
{

}
