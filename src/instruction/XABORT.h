#ifndef XABORT_H
#define XABORT_H

#include "../object.h"

namespace n_XABORT {
	class CXABORT :public Object
	{
	public:
		CXABORT();
		~CXABORT();
		int my_init(void *p=nullptr);
	};
}

using namespace n_XABORT;

#endif
