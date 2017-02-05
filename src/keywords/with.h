#ifndef WITH_H
#define WITH_H

#include "../object.h"

namespace n_with {
	class Cwith :public Object
	{
	public:
		Cwith();
		int my_init(void *p=nullptr);
	};
}

using namespace n_with;

#endif
