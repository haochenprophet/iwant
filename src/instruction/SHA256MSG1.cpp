#include "SHA256MSG1.h"
int CSHA256MSG1::my_init(void *p)
{
	this->name = "CSHA256MSG1";
	this->alias = "SHA256MSG1";
	return 0;
}

CSHA256MSG1::CSHA256MSG1()
{
	this->my_init();
}

CSHA256MSG1::~CSHA256MSG1()
{

}
