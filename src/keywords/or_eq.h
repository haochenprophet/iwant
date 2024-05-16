#ifndef OR_EQ_H
#define OR_EQ_H

#include "object/object.h"

namespace n_or_eq {
	class Cor_eq :public Object
	{
	public:
		Cor_eq();
		int my_init(void *p=nullptr);
	};
}

using namespace n_or_eq;

#endif
