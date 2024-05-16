#ifndef CMPSD_H
#define CMPSD_H

#include "object/object.h"

namespace n_CMPSD {
	class CCMPSD :public Object
	{
	public:
		CCMPSD();
		~CCMPSD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_CMPSD;

#endif
