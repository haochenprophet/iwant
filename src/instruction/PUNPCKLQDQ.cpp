#include "PUNPCKLQDQ.h"
int CPUNPCKLQDQ::my_init(void *p)
{
	this->name = "CPUNPCKLQDQ";
	this->alias = "PUNPCKLQDQ";
	return 0;
}

CPUNPCKLQDQ::CPUNPCKLQDQ()
{
	this->my_init();
}

CPUNPCKLQDQ::~CPUNPCKLQDQ()
{

}
