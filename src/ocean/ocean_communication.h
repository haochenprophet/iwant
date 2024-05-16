#ifndef OCEAN_COMMUNICATION_H
#define OCEAN_COMMUNICATION_H

#include "object/object.h"

namespace n_ocean_communication {
	class Cocean_communication :public Object
	{
	public:
		Cocean_communication();
		~Cocean_communication();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_communication); }
	};
}

using namespace n_ocean_communication;

#endif
