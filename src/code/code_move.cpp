#include "code_move.h"
int Ccode_move::my_init(void *p)
{
	this->name = "Ccode_move";
	this->alias = "code_move";
	return 0;
}

Ccode_move::Ccode_move()
{
	this->my_init();
}

Ccode_move::~Ccode_move()
{

}

#ifndef CODE_MOVE_TEST
#define CODE_MOVE_TEST 0//1
#endif

#if CODE_MOVE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
