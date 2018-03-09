#ifndef FSUB_H
#define FSUB_H

#include "../object.h"

namespace n_FSUB {
	class CFSUB :public Object
	{
	public:
		CFSUB();
		~CFSUB();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FSUB;

#endif
