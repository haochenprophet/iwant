#include "JCC.h"
int CJCC::my_init(void *p)
{
	this->name = "CJCC";
	this->alias = "JCC";
	return 0;
}

CJCC::CJCC()
{
	this->my_init();
}

CJCC::~CJCC()
{

}
