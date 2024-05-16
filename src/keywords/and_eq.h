#ifndef AND_EQ_H
#define AND_EQ_H

#include "object/object.h"

namespace n_and_eq {
	class Cand_eq :public Object
	{
	public:
		Cand_eq();
		int my_init(void *p=nullptr);
	};
}

using namespace n_and_eq;

#endif
