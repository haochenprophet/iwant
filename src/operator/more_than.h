#ifndef MORE_THAN_H
#define MORE_THAN_H

#include "operator.h"

namespace n_more_than {
	class Cmore_than :public Coperator
	{
	public:
		Cmore_than();
		~Cmore_than();
		int my_init(void *p=nullptr);
	};
}

using namespace n_more_than;

#endif
