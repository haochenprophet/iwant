#include "positive_sign.h"
int Cpositive_sign::my_init(void *p)
{
	this->name = "Cpositive_sign";
	this->alias = "positive_sign";
	this->symbol = "+";
	this->op_priority = 3;
	this->combination = Combination::R2L;
	return 0;
}

Cpositive_sign::Cpositive_sign()
{
	this->my_init();
}

Cpositive_sign::~Cpositive_sign()
{

}

#ifndef POSITIVE_SIGN_TEST
#define POSITIVE_SIGN_TEST 0//1
#endif

#if POSITIVE_SIGN_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "POSITIVE_SIGN_TEST\n\n";

	return 0;
}
#endif 