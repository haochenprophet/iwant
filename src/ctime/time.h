#ifndef TIME_H
#define TIME_H

#include "../object.h"

namespace n_time {
	class Ctime :public Object
	{
	public:
		Ctime();
		~Ctime();
		int my_init(void *p=nullptr);
	};
}

using namespace n_time;

#endif
