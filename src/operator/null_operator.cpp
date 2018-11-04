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

#ifndef NULL_OPERATOR_TEST
#define NULL_OPERATOR_TEST 0//1
#endif

#if NULL_OPERATOR_TEST
#include "operator_all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "NULL_OPERATOR_TEST\n\n";

	return 0;
}
#endif 