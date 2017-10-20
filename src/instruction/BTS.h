#ifndef BTS_H
#define BTS_H

#include "object.h"

namespace n_BTS {
	class CBTS :public Object
	{
	public:
		CBTS();
		~CBTS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_BTS;

#endif
