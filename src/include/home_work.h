#ifndef HOME_WORK_H
#define HOME_WORK_H

#include "../object.h"

namespace n_home_work {
	class Chome_work :public Object
	{
	public:
		Chome_work();
		~Chome_work();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Chome_work); }
	};
}

using namespace n_home_work;

#endif
