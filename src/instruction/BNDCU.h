#ifndef BNDCU_H
#define BNDCU_H

#include "object/object.h"

namespace n_BNDCU {
	class CBNDCU :public Object
	{
	public:
		CBNDCU();
		~CBNDCU();
		int my_init(void *p=nullptr);
	};
}

using namespace n_BNDCU;

#endif
