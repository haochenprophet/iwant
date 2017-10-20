#include "INVLPG.h"
int CINVLPG::my_init(void *p)
{
	this->name = "CINVLPG";
	this->alias = "INVLPG";
	return 0;
}

CINVLPG::CINVLPG()
{
	this->my_init();
}

CINVLPG::~CINVLPG()
{

}
