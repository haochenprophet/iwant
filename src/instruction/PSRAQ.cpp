#include "PSRAQ.h"
int CPSRAQ::my_init(void *p)
{
	this->name = "CPSRAQ";
	this->alias = "PSRAQ";
	return 0;
}

CPSRAQ::CPSRAQ()
{
	this->my_init();
}

CPSRAQ::~CPSRAQ()
{

}
