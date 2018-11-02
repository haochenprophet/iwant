#include "null_operator.h"
int Cnull_operator::my_init(void *p)
{
	this->name = "Cnull_operator";
	this->alias = "null_operator";
	this->symbol = "null";
	this->op_priority = -1;
	this->combination = Combination::none;
	return 0;
}

Cnull_operator::Cnull_operator()
{
	this->my_init();
}

Cnull_operator::~Cnull_operator()
{

}
