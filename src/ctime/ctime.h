#ifndef CTIME_H
#define CTIME_H

#include "object/object.h"

namespace n_ctime {
	class Cctime :public Object
	{
	public:
		Cctime();
		~Cctime();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cctime); }
		static char* ctime_c(const time_t* timer);
	};
}

using namespace n_ctime;

#endif
