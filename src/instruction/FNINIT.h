#ifndef FNINIT_H
#define FNINIT_H

#include "object.h"

namespace n_FNINIT {
	class CFNINIT :public Object
	{
	public:
		CFNINIT();
		~CFNINIT();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FNINIT;

#endif
