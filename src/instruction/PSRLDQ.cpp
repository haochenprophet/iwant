#include "PSRLDQ.h"
int CPSRLDQ::my_init(void *p)
{
	this->name = "CPSRLDQ";
	this->alias = "PSRLDQ";
	return 0;
}

CPSRLDQ::CPSRLDQ()
{
	this->my_init();
}

CPSRLDQ::~CPSRLDQ()
{

}
