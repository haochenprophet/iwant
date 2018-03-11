#include "IN_I.h"
int CIN::my_init(void *p)
{
	this->name = "CIN";
	this->alias = "IN";
	return 0;
}

CIN::CIN()
{
	this->my_init();
}

CIN::~CIN()
{

}
