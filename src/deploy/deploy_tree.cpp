#include "deploy_tree.h"
int Cdeploy_tree::my_init(void *p)
{
	this->name = "Cdeploy_tree";
	this->alias = "deploy_tree";
	return 0;
}

Cdeploy_tree::Cdeploy_tree()
{
	this->my_init();
}

Cdeploy_tree::~Cdeploy_tree()
{

}

#ifndef DEPLOY_TREE_TEST
#define DEPLOY_TREE_TEST 0//1
#endif

#if DEPLOY_TREE_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
