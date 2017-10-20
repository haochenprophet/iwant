#include "FICOMP.h"
int CFICOMP::my_init(void *p)
{
	this->name = "CFICOMP";
	this->alias = "FICOMP";
	return 0;
}

CFICOMP::CFICOMP()
{
	this->my_init();
}

CFICOMP::~CFICOMP()
{

}
