#ifndef PUSHA_H
#define PUSHA_H

#include "object/object.h"

namespace n_PUSHA {
	class CPUSHA :public Object
	{
	public:
		CPUSHA();
		~CPUSHA();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PUSHA;

#endif
