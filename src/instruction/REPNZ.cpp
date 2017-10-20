#include "REPNZ.h"
int CREPNZ::my_init(void *p)
{
	this->name = "CREPNZ";
	this->alias = "REPNZ";
	return 0;
}

CREPNZ::CREPNZ()
{
	this->my_init();
}

CREPNZ::~CREPNZ()
{

}
