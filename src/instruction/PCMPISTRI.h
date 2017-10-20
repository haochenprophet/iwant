#ifndef PCMPISTRI_H
#define PCMPISTRI_H

#include "object.h"

namespace n_PCMPISTRI {
	class CPCMPISTRI :public Object
	{
	public:
		CPCMPISTRI();
		~CPCMPISTRI();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PCMPISTRI;

#endif
