#ifndef PSLLD_H
#define PSLLD_H

#include "object.h"

namespace n_PSLLD {
	class CPSLLD :public Object
	{
	public:
		CPSLLD();
		~CPSLLD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PSLLD;

#endif
