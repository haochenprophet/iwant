#include "deploy_message.h"
int Cdeploy_message::my_init(void *p)
{
	this->name = "Cdeploy_message";
	this->alias = "deploy_message";
	return 0;
}

Cdeploy_message::Cdeploy_message()
{
	this->my_init();
}

Cdeploy_message::~Cdeploy_message()
{

}

#ifndef DEPLOY_MESSAGE_TEST
#define DEPLOY_MESSAGE_TEST 0//1
#endif

#if DEPLOY_MESSAGE_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
