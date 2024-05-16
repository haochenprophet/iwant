#ifndef FUCOMPP_H
#define FUCOMPP_H

#include "object/object.h"

namespace n_FUCOMPP {
	class CFUCOMPP :public Object
	{
	public:
		CFUCOMPP();
		~CFUCOMPP();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FUCOMPP;

#endif
