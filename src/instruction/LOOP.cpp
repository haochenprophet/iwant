#include "LOOP.h"
int CLOOP::my_init(void *p)
{
	this->name = "CLOOP";
	this->alias = "LOOP";
	return 0;
}

CLOOP::CLOOP()
{
	this->my_init();
}

CLOOP::~CLOOP()
{

}
