#include "KSHIFTLW.h"
int CKSHIFTLW::my_init(void *p)
{
	this->name = "CKSHIFTLW";
	this->alias = "KSHIFTLW";
	return 0;
}

CKSHIFTLW::CKSHIFTLW()
{
	this->my_init();
}

CKSHIFTLW::~CKSHIFTLW()
{

}
