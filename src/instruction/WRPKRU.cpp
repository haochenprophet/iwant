#include "WRPKRU.h"
int CWRPKRU::my_init(void *p)
{
	this->name = "CWRPKRU";
	this->alias = "WRPKRU";
	return 0;
}

CWRPKRU::CWRPKRU()
{
	this->my_init();
}

CWRPKRU::~CWRPKRU()
{

}
