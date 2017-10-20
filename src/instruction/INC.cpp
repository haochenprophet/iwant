#include "INC.h"
int CINC::my_init(void *p)
{
	this->name = "CINC";
	this->alias = "INC";
	return 0;
}

CINC::CINC()
{
	this->my_init();
}

CINC::~CINC()
{

}
