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
		size_t my_size() { return sizeof(Cgmtime); }
		static struct tm* gmtime_c(const time_t* timer);
	};
}

using namespace n_gmtime;

#endif
