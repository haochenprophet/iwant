#ifndef TIME_H
#define TIME_H

#include "object/object.h"

namespace n_time {
	class Ctime :public Object
	{
	public:
		Ctime();
		~Ctime();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Ctime); }
		static time_t time_c(time_t* timer);
	};
}

using namespace n_time;

#endif
