#include "VINSERTI64x2.h"
int CVINSERTI64x2::my_init(void *p)
{
	this->name = "CVINSERTI64x2";
	this->alias = "VINSERTI64x2";
	return 0;
}

CVINSERTI64x2::CVINSERTI64x2()
{
	this->my_init();
}

CVINSERTI64x2::~CVINSERTI64x2()
{

}
