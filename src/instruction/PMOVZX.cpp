#include "PMOVZX.h"
int CPMOVZX::my_init(void *p)
{
	this->name = "CPMOVZX";
	this->alias = "PMOVZX";
	return 0;
}

CPMOVZX::CPMOVZX()
{
	this->my_init();
}

CPMOVZX::~CPMOVZX()
{

}
