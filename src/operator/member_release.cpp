#include "member_release.h"
int Cmember_release::my_init(void *p)
{
	this->name = "Cmember_release";
	this->alias = "member_release";
	this->symbol = ".*";
	this->op_priority = 4;
	this->combination = Combination::L2R;
	return 0;
}

Cmember_release::Cmember_release()
{
	this->my_init();
}

Cmember_release::~Cmember_release()
{

}

#ifndef MEMBER_RELEASE_TEST
#define MEMBER_RELEASE_TEST 0//1
#endif

#if MEMBER_RELEASE_TEST
#include "operator_all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "MEMBER_RELEASE_TEST\n\n";

	return 0;
}
#endif 