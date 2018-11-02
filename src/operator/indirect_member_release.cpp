#include "indirect_member_release.h"
int Cindirect_member_release::my_init(void *p)
{
	this->name = "Cindirect_member_release";
	this->alias = "indirect_member_release";
	this->symbol = "->*";
	this->op_priority = 4;
	this->combination = Combination::L2R;
	return 0;
}

Cindirect_member_release::Cindirect_member_release()
{
	this->my_init();
}

Cindirect_member_release::~Cindirect_member_release()
{

}

#ifndef INDIRECT_MEMBER_RELEASE_TEST
#define INDIRECT_MEMBER_RELEASE_TEST 0//1
#endif

#if INDIRECT_MEMBER_RELEASE_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "INDIRECT_MEMBER_RELEASE_TEST\n\n";

	return 0;
}
#endif 