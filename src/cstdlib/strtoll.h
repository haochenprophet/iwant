#ifndef STRTOLL_H
#define STRTOLL_H

#include "../object.h"

namespace n_strtoll {
	class Cstrtoll :public Object
	{
	public:
		Cstrtoll();
		~Cstrtoll();
		int my_init(void *p=nullptr);
	};
}

using namespace n_strtoll;

#endif
