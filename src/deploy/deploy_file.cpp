#include "deploy_file.h"
int Cdeploy_file::my_init(void *p)
{
	this->name = "Cdeploy_file";
	this->alias = "deploy_file";
	return 0;
}

Cdeploy_file::Cdeploy_file()
{
	this->my_init();
}

Cdeploy_file::~Cdeploy_file()
{

}

#ifndef DEPLOY_FILE_TEST
#define DEPLOY_FILE_TEST 0//1
#endif

#if DEPLOY_FILE_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
