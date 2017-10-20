#include "VINSERTI32x4.h"
int CVINSERTI32x4::my_init(void *p)
{
	this->name = "CVINSERTI32x4";
	this->alias = "VINSERTI32x4";
	return 0;
}

CVINSERTI32x4::CVINSERTI32x4()
{
	this->my_init();
}

CVINSERTI32x4::~CVINSERTI32x4()
{

}
