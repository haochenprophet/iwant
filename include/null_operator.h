#ifndef NULL_OPERATOR_H
#define NULL_OPERATOR_H

#include "operator.h"

namespace n_null_operator {
	class Cnull_operator :public Coperator
	{
	public:
		Cnull_operator();
		~Cnull_operator();
		int my_init(void *p=nullptr);
	};
}

using namespace n_null_operator;

#endif
