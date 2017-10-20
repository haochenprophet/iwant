#include "VRNDSCALEPS.h"
int CVRNDSCALEPS::my_init(void *p)
{
	this->name = "CVRNDSCALEPS";
	this->alias = "VRNDSCALEPS";
	return 0;
}

CVRNDSCALEPS::CVRNDSCALEPS()
{
	this->my_init();
}

CVRNDSCALEPS::~CVRNDSCALEPS()
{

}
