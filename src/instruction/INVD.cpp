#include "INVD.h"
int CINVD::my_init(void *p)
{
	this->name = "CINVD";
	this->alias = "INVD";
	return 0;
}

CINVD::CINVD()
{
	this->my_init();
}

CINVD::~CINVD()
{

}
