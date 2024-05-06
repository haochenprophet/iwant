#include "security_quit.h"
int Csecurity_quit::my_init(void *p)
{
	this->name = "Csecurity_quit";
	this->alias = "security_quit";
	return 0;
}

Csecurity_quit::Csecurity_quit()
{
	this->my_init();
}

Csecurity_quit::~Csecurity_quit()
{

}

#ifndef SECURITY_QUIT_TEST
#define SECURITY_QUIT_TEST 0//1
#endif

#if SECURITY_QUIT_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
