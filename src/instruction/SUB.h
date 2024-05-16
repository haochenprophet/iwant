#ifndef SUB_H
#define SUB_H

#include "object/object.h"

namespace n_SUB {
	class CSUB :public Object
	{
	public:
		CSUB();
		~CSUB();
		int my_init(void *p=nullptr);
	};
}

using namespace n_SUB;

#endif
