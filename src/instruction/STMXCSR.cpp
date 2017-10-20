#include "STMXCSR.h"
int CSTMXCSR::my_init(void *p)
{
	this->name = "CSTMXCSR";
	this->alias = "STMXCSR";
	return 0;
}

CSTMXCSR::CSTMXCSR()
{
	this->my_init();
}

CSTMXCSR::~CSTMXCSR()
{

}
