#include "deploy_doc.h"
int Cdeploy_doc::my_init(void *p)
{
	this->name = "Cdeploy_doc";
	this->alias = "deploy_doc";
	return 0;
}

Cdeploy_doc::Cdeploy_doc()
{
	this->my_init();
}

Cdeploy_doc::~Cdeploy_doc()
{

}

#ifndef DEPLOY_DOC_TEST
#define DEPLOY_DOC_TEST 0//1
#endif

#if DEPLOY_DOC_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
