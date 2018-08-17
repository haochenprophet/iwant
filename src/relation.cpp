#include "relation.h"
#include "relation_class.h"

int Crelation::my_init(void *p)
{
	this->name = "Crelation";
	this->alias = "relation";
	return 0;
}

Crelation::Crelation()
{
	this->my_init();
}

#if RELATION_TEST

int relationin(int argc, char *argv[])
{
	std::cout<<__FILE__<<"/"<<__FUNCTION__<<"/"<<__LINE__<<"\n";
	return 0;
}
#endif
