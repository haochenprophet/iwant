#ifndef STC_H
#define STC_H

#include "object.h"

namespace n_STC {
	class CSTC :public Object
	{
	public:
		CSTC();
		~CSTC();
		int my_init(void *p=nullptr);
	};
}

using namespace n_STC;

#endif
