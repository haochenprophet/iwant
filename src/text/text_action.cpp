#include "text_action.h"
int Ctext_action::my_init(void *p)
{
	this->name = "Ctext_action";
	this->alias = "text_action";
	return 0;
}

Ctext_action::Ctext_action()
{
	this->my_init();
}

Ctext_action::~Ctext_action()
{

}

#ifndef TEXT_ACTION_TEST
#define TEXT_ACTION_TEST 0//1
#endif

#if TEXT_ACTION_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
