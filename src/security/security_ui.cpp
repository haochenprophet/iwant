#include "security_ui.h"
int Csecurity_ui::my_init(void *p)
{
	this->name = "Csecurity_ui";
	this->alias = "security_ui";
	return 0;
}

Csecurity_ui::Csecurity_ui()
{
	this->my_init();
}

Csecurity_ui::~Csecurity_ui()
{

}

#ifndef SECURITY_UI_TEST
#define SECURITY_UI_TEST 0//1
#endif

#if SECURITY_UI_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
