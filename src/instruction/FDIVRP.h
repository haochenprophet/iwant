#ifndef FDIVRP_H
#define FDIVRP_H

#include "object.h"

namespace n_FDIVRP {
	class CFDIVRP :public Object
	{
	public:
		CFDIVRP();
		~CFDIVRP();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FDIVRP;

#endif
