#include "REPZ.h"
int CREPZ::my_init(void *p)
{
	this->name = "CREPZ";
	this->alias = "REPZ";
	return 0;
}

CREPZ::CREPZ()
{
	this->my_init();
}

CREPZ::~CREPZ()
{

}
