#include "SHA256MSG2.h"
int CSHA256MSG2::my_init(void *p)
{
	this->name = "CSHA256MSG2";
	this->alias = "SHA256MSG2";
	return 0;
}

CSHA256MSG2::CSHA256MSG2()
{
	this->my_init();
}

CSHA256MSG2::~CSHA256MSG2()
{

}
