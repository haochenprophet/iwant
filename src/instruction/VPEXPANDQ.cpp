#include "VPEXPANDQ.h"
int CVPEXPANDQ::my_init(void *p)
{
	this->name = "CVPEXPANDQ";
	this->alias = "VPEXPANDQ";
	return 0;
}

CVPEXPANDQ::CVPEXPANDQ()
{
	this->my_init();
}

CVPEXPANDQ::~CVPEXPANDQ()
{

}
