#include "PMOVMSKB.h"
int CPMOVMSKB::my_init(void *p)
{
	this->name = "CPMOVMSKB";
	this->alias = "PMOVMSKB";
	return 0;
}

CPMOVMSKB::CPMOVMSKB()
{
	this->my_init();
}

CPMOVMSKB::~CPMOVMSKB()
{

}
