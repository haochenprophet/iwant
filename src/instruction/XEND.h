#ifndef XEND_H
#define XEND_H

#include "object/object.h"

namespace n_XEND {
	class CXEND :public Object
	{
	public:
		CXEND();
		~CXEND();
		int my_init(void *p=nullptr);
	};
}

using namespace n_XEND;

#endif
