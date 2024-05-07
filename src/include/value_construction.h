#ifndef VALUE_CONSTRUCTION_H
#define VALUE_CONSTRUCTION_H

#include "operator.h"

namespace n_value_construction {
	class Cvalue_construction :public Coperator
	{
	public:
		Cvalue_construction();
		~Cvalue_construction();
		int my_init(void *p=nullptr);
	};
}

using namespace n_value_construction;

#endif
