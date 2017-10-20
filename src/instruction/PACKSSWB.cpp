#include "PACKSSWB.h"
int CPACKSSWB::my_init(void *p)
{
	this->name = "CPACKSSWB";
	this->alias = "PACKSSWB";
	return 0;
}

CPACKSSWB::CPACKSSWB()
{
	this->my_init();
}

CPACKSSWB::~CPACKSSWB()
{

}
