#ifndef OCEAN_FLOW_H
#define OCEAN_FLOW_H

#include "object/object.h"

namespace n_ocean_flow {
	class Cocean_flow :public Object
	{
	public:
		Cocean_flow();
		~Cocean_flow();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_flow); }
	};
}

using namespace n_ocean_flow;

#endif
