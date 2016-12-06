#include "atomic_noexcept.h"
int Catomic_noexcept::my_init(void *p)
{
	this->name = "Catomic_noexcept";
	this->alias = "atomic_noexcept";
	return 0;
}

Catomic_noexcept::Catomic_noexcept()
{
	this->my_init();
}
