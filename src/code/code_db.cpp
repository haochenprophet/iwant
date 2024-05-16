#include "code_db.h"
int Ccode_db::my_init(void *p)
{
	this->name = "Ccode_db";
	this->alias = "code_db";
	return 0;
}

Ccode_db::Ccode_db()
{
	this->my_init();
}

Ccode_db::~Ccode_db()
{

}

#ifndef CODE_DB_TEST
#define CODE_DB_TEST 0//1
#endif

#if CODE_DB_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
