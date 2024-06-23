#include "text_status.h"
int Ctext_status::my_init(void *p)
{
	this->name = "Ctext_status";
	this->alias = "text_status";
	return 0;
}

Ctext_status::Ctext_status()
{
	this->my_init();
}

Ctext_status::~Ctext_status()
{

}

#ifndef TEXT_STATUS_TEST
#define TEXT_STATUS_TEST 0//1
#endif

#if TEXT_STATUS_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
