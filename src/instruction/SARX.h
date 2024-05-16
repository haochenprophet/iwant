#ifndef SARX_H
#define SARX_H

#include "object/object.h"

namespace n_SARX {
	class CSARX :public Object
	{
	public:
		CSARX();
		~CSARX();
		int my_init(void *p=nullptr);
	};
}

using namespace n_SARX;

#endif
