#ifndef NEARBYINT_H
#define NEARBYINT_H

#include "../object.h"

namespace n_nearbyint {
	class Cnearbyint :public Object
	{
	public:
		Cnearbyint();
		~Cnearbyint();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cnearbyint); }
	};
}

using namespace n_nearbyint;

#endif
