#ifndef FSQRT_H
#define FSQRT_H

#include "object/object.h"

namespace n_FSQRT {
	class CFSQRT :public Object
	{
	public:
		CFSQRT();
		~CFSQRT();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FSQRT;

#endif
