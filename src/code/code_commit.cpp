#include "code_commit.h"
int Ccode_commit::my_init(void *p)
{
	this->name = "Ccode_commit";
	this->alias = "code_commit";
	return 0;
}

Ccode_commit::Ccode_commit()
{
	this->my_init();
}

Ccode_commit::~Ccode_commit()
{

}

#ifndef CODE_COMMIT_TEST
#define CODE_COMMIT_TEST 0//1
#endif

#if CODE_COMMIT_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
