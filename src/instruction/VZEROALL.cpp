#include "VZEROALL.h"
int CVZEROALL::my_init(void *p)
{
	this->name = "CVZEROALL";
	this->alias = "VZEROALL";
	return 0;
}

CVZEROALL::CVZEROALL()
{
	this->my_init();
}

CVZEROALL::~CVZEROALL()
{

}
