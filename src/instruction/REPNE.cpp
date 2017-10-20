#include "REPNE.h"
int CREPNE::my_init(void *p)
{
	this->name = "CREPNE";
	this->alias = "REPNE";
	return 0;
}

CREPNE::CREPNE()
{
	this->my_init();
}

CREPNE::~CREPNE()
{

}
