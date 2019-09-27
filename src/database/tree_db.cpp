#include "tree_db.h"
int Ctree_db::my_init(void *p)
{
	this->name = "Ctree_db";
	this->alias = "tree_db";
	return 0;
}

Ctree_db::Ctree_db()
{
	this->my_init();
}

Ctree_db::~Ctree_db()
{

}

#ifndef TREE_DB_TEST
#define TREE_DB_TEST 0//1
#endif

#if TREE_DB_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "TREE_DB_TEST\n\n";

	return 0;
}
#endif 