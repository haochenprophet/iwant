#ifndef XBEGIN_H
#define XBEGIN_H

#include "object.h"

namespace n_XBEGIN {
	class CXBEGIN :public Object
	{
	public:
		CXBEGIN();
		~CXBEGIN();
		int my_init(void *p=nullptr);
	};
}

using namespace n_XBEGIN;

#endif
