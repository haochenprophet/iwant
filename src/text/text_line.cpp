#include "text_line.h"
int Ctext_line::my_init(void *p)
{
	this->name = "Ctext_line";
	this->alias = "text_line";
	return 0;
}

Ctext_line::Ctext_line()
{
	this->my_init();
}

Ctext_line::~Ctext_line()
{

}

#ifndef TEXT_LINE_TEST
#define TEXT_LINE_TEST 0//1
#endif

#if TEXT_LINE_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
