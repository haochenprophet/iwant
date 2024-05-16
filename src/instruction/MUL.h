#ifndef MUL_H
#define MUL_H

#include "object/object.h"

namespace n_MUL {
	class CMUL :public Object
	{
	public:
		CMUL();
		~CMUL();
		int my_init(void *p=nullptr);
	};
}

using namespace n_MUL;

#endif
