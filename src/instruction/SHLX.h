#ifndef SHLX_H
#define SHLX_H

#include "object/object.h"

namespace n_SHLX {
	class CSHLX :public Object
	{
	public:
		CSHLX();
		~CSHLX();
		int my_init(void *p=nullptr);
	};
}

using namespace n_SHLX;

#endif
