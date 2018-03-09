#include "k_uuid.h"
int CKuuid::my_init(void *p)
{
	this->name = "Cuuid";
	this->alias = "uuid";
	return 0;
}

CKuuid::CKuuid()
{
	this->my_init();
}
