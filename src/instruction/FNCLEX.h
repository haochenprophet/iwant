#ifndef FNCLEX_H
#define FNCLEX_H

#include "object/object.h"

namespace n_FNCLEX {
	class CFNCLEX :public Object
	{
	public:
		CFNCLEX();
		~CFNCLEX();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FNCLEX;

#endif
