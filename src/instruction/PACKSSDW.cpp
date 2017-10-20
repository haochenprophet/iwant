#include "PACKSSDW.h"
int CPACKSSDW::my_init(void *p)
{
	this->name = "CPACKSSDW";
	this->alias = "PACKSSDW";
	return 0;
}

CPACKSSDW::CPACKSSDW()
{
	this->my_init();
}

CPACKSSDW::~CPACKSSDW()
{

}
