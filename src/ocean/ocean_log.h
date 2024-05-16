#ifndef OCEAN_LOG_H
#define OCEAN_LOG_H

#include "object/object.h"

namespace n_ocean_log {
	class Cocean_log :public Object
	{
	public:
		Cocean_log();
		~Cocean_log();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_log); }
	};
}

using namespace n_ocean_log;

#endif
