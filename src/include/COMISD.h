#ifndef COMISD_H
#define COMISD_H

#include "../object.h"

namespace n_COMISD {
	class CCOMISD :public Object
	{
	public:
		CCOMISD();
		~CCOMISD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_COMISD;

#endif
