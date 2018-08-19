#ifndef CLOCK_H
#define CLOCK_H

#include "../object.h"

namespace n_clock {
	class Cclock :public Object
	{
	public:
		Cclock();
		~Cclock();
		int my_init(void *p=nullptr);
	};
}

using namespace n_clock;

#endif
