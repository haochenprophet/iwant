#include "member_release.h"
int Cmember_release::my_init(void *p)
{
	this->name = "Cmember_release";
	this->alias = "member_release";
	return 0;
}

Cmember_release::Cmember_release()
{
	this->my_init();
}

Cmember_release::~Cmember_release()
{

}
