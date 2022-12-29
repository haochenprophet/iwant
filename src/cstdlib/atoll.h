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
		size_t my_size() { return sizeof(Catoll); }
	};
}

using namespace n_atoll;

#endif
