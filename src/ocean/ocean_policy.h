#ifndef OCEAN_POLICY_H
#define OCEAN_POLICY_H

#include "object/object.h"

namespace n_ocean_policy {
	class Cocean_policy :public Object
	{
	public:
		Cocean_policy();
		~Cocean_policy();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_policy); }
	};
}

using namespace n_ocean_policy;

#endif
