#ifndef SPACEPORT_SEARCH_H
#define SPACEPORT_SEARCH_H

#include "../object.h"

namespace n_spaceport_search {
	class Cspaceport_search :public Object
	{
	public:
		Cspaceport_search();
		~Cspaceport_search();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cspaceport_search); }
	};
}

using namespace n_spaceport_search;

#endif
