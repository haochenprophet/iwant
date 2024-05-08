#ifndef PCMPESTRI_H
#define PCMPESTRI_H

#include "../object.h"

namespace n_PCMPESTRI {
	class CPCMPESTRI :public Object
	{
	public:
		CPCMPESTRI();
		~CPCMPESTRI();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PCMPESTRI;

#endif
