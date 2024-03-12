#ifndef AIRPLANE_COWLING_H
#define AIRPLANE_COWLING_H

#include "../object.h"

namespace n_airplane_cowling {
	class Cairplane_cowling :public Object
	{
	public:
		Cairplane_cowling();
		~Cairplane_cowling();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cairplane_cowling); }
	};
}

using namespace n_airplane_cowling;

#endif
