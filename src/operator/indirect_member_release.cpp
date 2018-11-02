#include "indirect_member_release.h"
int Cindirect_member_release::my_init(void *p)
{
	this->name = "Cindirect_member_release";
	this->alias = "indirect_member_release";
	return 0;
}

Cindirect_member_release::Cindirect_member_release()
{
	this->my_init();
}

Cindirect_member_release::~Cindirect_member_release()
{

}
