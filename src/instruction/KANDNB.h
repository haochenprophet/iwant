#ifndef KANDNB_H
#define KANDNB_H

#include "object/object.h"

namespace n_KANDNB {
	class CKANDNB :public Object
	{
	public:
		CKANDNB();
		~CKANDNB();
		int my_init(void *p=nullptr);
	};
}

using namespace n_KANDNB;

#endif
