#include "deploy_goods.h"
int Cdeploy_goods::my_init(void *p)
{
	this->name = "Cdeploy_goods";
	this->alias = "deploy_goods";
	return 0;
}

Cdeploy_goods::Cdeploy_goods()
{
	this->my_init();
}

Cdeploy_goods::~Cdeploy_goods()
{

}

#ifndef DEPLOY_GOODS_TEST
#define DEPLOY_GOODS_TEST 0//1
#endif

#if DEPLOY_GOODS_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
