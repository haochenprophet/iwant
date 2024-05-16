#ifndef WARNING_H
#define WARNING_H

#include "object/object.h"

namespace n_warning {
	class Cwarning :public Object
	{
	public:
		Cwarning();
		~Cwarning();
		int my_init(void *p=nullptr);
	};
}

using namespace n_warning;

#endif
