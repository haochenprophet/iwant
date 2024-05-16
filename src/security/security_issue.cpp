#include "security_issue.h"
int Csecurity_issue::my_init(void *p)
{
	this->name = "Csecurity_issue";
	this->alias = "security_issue";
	return 0;
}

Csecurity_issue::Csecurity_issue()
{
	this->my_init();
}

Csecurity_issue::~Csecurity_issue()
{

}

#ifndef SECURITY_ISSUE_TEST
#define SECURITY_ISSUE_TEST 0//1
#endif

#if SECURITY_ISSUE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
