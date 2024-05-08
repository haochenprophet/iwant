#ifndef UCOMISD_H
#define UCOMISD_H

#include "../object.h"

namespace n_UCOMISD {
	class CUCOMISD :public Object
	{
	public:
		CUCOMISD();
		~CUCOMISD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_UCOMISD;

#endif
