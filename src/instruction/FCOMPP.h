#ifndef FCOMPP_H
#define FCOMPP_H

#include "object/object.h"

namespace n_FCOMPP {
	class CFCOMPP :public Object
	{
	public:
		CFCOMPP();
		~CFCOMPP();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FCOMPP;

#endif
