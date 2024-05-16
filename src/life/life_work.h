#ifndef LIFE_WORK_H
#define LIFE_WORK_H

#include "object/object.h"

namespace n_life_work {
	class Clife_work :public Object
	{
	public:
		Clife_work();
		~Clife_work();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Clife_work); }
	};
}

using namespace n_life_work;

#endif
