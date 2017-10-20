#ifndef CDQ_H
#define CDQ_H

#include "object.h"

namespace n_CDQ {
	class CCDQ :public Object
	{
	public:
		CCDQ();
		~CCDQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_CDQ;

#endif
