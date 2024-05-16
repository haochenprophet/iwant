#ifndef ROUNDSD_H
#define ROUNDSD_H

#include "object/object.h"

namespace n_ROUNDSD {
	class CROUNDSD :public Object
	{
	public:
		CROUNDSD();
		~CROUNDSD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_ROUNDSD;

#endif
