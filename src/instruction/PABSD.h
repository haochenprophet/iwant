#ifndef PABSD_H
#define PABSD_H

#include "../object.h"

namespace n_PABSD {
	class CPABSD :public Object
	{
	public:
		CPABSD();
		~CPABSD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PABSD;

#endif
