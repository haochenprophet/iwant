#ifndef MAXSD_H
#define MAXSD_H

#include "../object.h"

namespace n_MAXSD {
	class CMAXSD :public Object
	{
	public:
		CMAXSD();
		~CMAXSD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_MAXSD;

#endif
