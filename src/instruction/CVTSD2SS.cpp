#include "CVTSD2SS.h"
int CCVTSD2SS::my_init(void *p)
{
	this->name = "CCVTSD2SS";
	this->alias = "CVTSD2SS";
	return 0;
}

CCVTSD2SS::CCVTSD2SS()
{
	this->my_init();
}

CCVTSD2SS::~CCVTSD2SS()
{

}
