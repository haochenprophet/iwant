#include "RDPKRU.h"
int CRDPKRU::my_init(void *p)
{
	this->name = "CRDPKRU";
	this->alias = "RDPKRU";
	return 0;
}

CRDPKRU::CRDPKRU()
{
	this->my_init();
}

CRDPKRU::~CRDPKRU()
{

}
