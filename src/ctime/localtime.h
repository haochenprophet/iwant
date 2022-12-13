#ifndef LOCALTIME_H
#define LOCALTIME_H

#include "../object.h"

namespace n_localtime {
	class Clocaltime :public Object
	{
	public:
		Clocaltime();
		~Clocaltime();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Clocaltime); }
		static struct tm* localtime_c(const time_t* timer);

	};
}

using namespace n_localtime;

#endif
