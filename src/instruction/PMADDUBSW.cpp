#include "PMADDUBSW.h"
int CPMADDUBSW::my_init(void *p)
{
	this->name = "CPMADDUBSW";
	this->alias = "PMADDUBSW";
	return 0;
}

CPMADDUBSW::CPMADDUBSW()
{
	this->my_init();
}

CPMADDUBSW::~CPMADDUBSW()
{

}
