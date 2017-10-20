#ifndef MONITOR_H
#define MONITOR_H

#include "object.h"

namespace n_MONITOR {
	class CMONITOR :public Object
	{
	public:
		CMONITOR();
		~CMONITOR();
		int my_init(void *p=nullptr);
	};
}

using namespace n_MONITOR;

#endif
