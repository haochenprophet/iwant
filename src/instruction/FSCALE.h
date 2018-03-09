#ifndef FSCALE_H
#define FSCALE_H

#include "../object.h"

namespace n_FSCALE {
	class CFSCALE :public Object
	{
	public:
		CFSCALE();
		~CFSCALE();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FSCALE;

#endif
