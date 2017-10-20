#include "AESENC.h"
int CAESENC::my_init(void *p)
{
	this->name = "CAESENC";
	this->alias = "AESENC";
	return 0;
}

CAESENC::CAESENC()
{
	this->my_init();
}

CAESENC::~CAESENC()
{

}
