#ifndef GMTIME_H
#define GMTIME_H

#include "../object.h"

namespace n_gmtime {
	class Cgmtime :public Object
	{
	public:
		Cgmtime();
		~Cgmtime();
		int my_init(void *p=nullptr);
	};
}

using namespace n_gmtime;

#endif
