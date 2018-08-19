#ifndef CEIL_H
#define CEIL_H

#include "../object.h"

namespace n_ceil {
	class Cceil :public Object
	{
	public:
		Cceil();
		~Cceil();
		int my_init(void *p=nullptr);
	};
}

using namespace n_ceil;

#endif
