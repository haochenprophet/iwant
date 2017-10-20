#include "PUNPCKHBW.h"
int CPUNPCKHBW::my_init(void *p)
{
	this->name = "CPUNPCKHBW";
	this->alias = "PUNPCKHBW";
	return 0;
}

CPUNPCKHBW::CPUNPCKHBW()
{
	this->my_init();
}

CPUNPCKHBW::~CPUNPCKHBW()
{

}
