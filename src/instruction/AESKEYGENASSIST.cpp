#include "AESKEYGENASSIST.h"
int CAESKEYGENASSIST::my_init(void *p)
{
	this->name = "CAESKEYGENASSIST";
	this->alias = "AESKEYGENASSIST";
	return 0;
}

CAESKEYGENASSIST::CAESKEYGENASSIST()
{
	this->my_init();
}

CAESKEYGENASSIST::~CAESKEYGENASSIST()
{

}
