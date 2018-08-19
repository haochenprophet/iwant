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
	};
}

using namespace n_localtime;

#endif
