#ifndef NEXTTOWARD_H
#define NEXTTOWARD_H

#include "../object.h"

namespace n_nexttoward {
	class Cnexttoward :public Object
	{
	public:
		Cnexttoward();
		~Cnexttoward();
		int my_init(void *p=nullptr);
	};
}

using namespace n_nexttoward;

#endif
