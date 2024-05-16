#ifndef HOME_SEARCH_H
#define HOME_SEARCH_H

#include "object/object.h"

namespace n_home_search {
	class Chome_search :public Object
	{
	public:
		Chome_search();
		~Chome_search();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Chome_search); }
	};
}

using namespace n_home_search;

#endif
