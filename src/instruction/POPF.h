#ifndef POPF_H
#define POPF_H

#include "object.h"

namespace n_POPF {
	class CPOPF :public Object
	{
	public:
		CPOPF();
		~CPOPF();
		int my_init(void *p=nullptr);
	};
}

using namespace n_POPF;

#endif
