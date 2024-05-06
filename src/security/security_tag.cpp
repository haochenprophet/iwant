#include "security_tag.h"
int Csecurity_tag::my_init(void *p)
{
	this->name = "Csecurity_tag";
	this->alias = "security_tag";
	return 0;
}

Csecurity_tag::Csecurity_tag()
{
	this->my_init();
}

Csecurity_tag::~Csecurity_tag()
{

}

#ifndef SECURITY_TAG_TEST
#define SECURITY_TAG_TEST 0//1
#endif

#if SECURITY_TAG_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
