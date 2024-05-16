#ifndef FSINCOS_H
#define FSINCOS_H

#include "object/object.h"

namespace n_FSINCOS {
	class CFSINCOS :public Object
	{
	public:
		CFSINCOS();
		~CFSINCOS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FSINCOS;

#endif
