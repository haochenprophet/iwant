#ifndef OUTSD_H
#define OUTSD_H

#include "object/object.h"

namespace n_OUTSD {
	class COUTSD :public Object
	{
	public:
		COUTSD();
		~COUTSD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_OUTSD;

#endif
