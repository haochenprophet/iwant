#include "VINSERTI32x8.h"
int CVINSERTI32x8::my_init(void *p)
{
	this->name = "CVINSERTI32x8";
	this->alias = "VINSERTI32x8";
	return 0;
}

CVINSERTI32x8::CVINSERTI32x8()
{
	this->my_init();
}

CVINSERTI32x8::~CVINSERTI32x8()
{

}
