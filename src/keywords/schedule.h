#ifndef SCHEDULE_H
#define SCHEDULE_H

#include "object.h"

namespace n_schedule {
	class Cschedule :public Object
	{
	public:
		Cschedule();
		int my_init(void *p=nullptr);
	};
}

using namespace n_schedule;

#endif
