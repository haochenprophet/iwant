#ifndef ATOLL_H
#define ATOLL_H

#include "../object.h"

namespace n_atoll {
	class Catoll :public Object
	{
	public:
		Catoll();
		~Catoll();
		int my_init(void *p=nullptr);
	};
}

using namespace n_atoll;

#endif
