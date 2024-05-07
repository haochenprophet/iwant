#ifndef STOSD_H
#define STOSD_H

#include "../object.h"

namespace n_STOSD {
	class CSTOSD :public Object
	{
	public:
		CSTOSD();
		~CSTOSD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_STOSD;

#endif
