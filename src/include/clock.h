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
		size_t my_size() { return sizeof(Cclock); }
		static clock_t clock_c(void);
	};
}

using namespace n_clock;

#endif
