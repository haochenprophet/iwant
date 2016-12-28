#include "atomic_commit.h"
int Catomic_commit::my_init(void *p)
{
	this->name = "Catomic_commit";
	this->alias = "atomic_commit";
	return 0;
}

Catomic_commit::Catomic_commit()
{
	this->my_init();
}
