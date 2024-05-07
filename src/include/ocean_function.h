#ifndef OCEAN_FUNCTION_H
#define OCEAN_FUNCTION_H

#include "../object.h"

namespace n_ocean_function {
	class Cocean_function :public Object
	{
	public:
		Cocean_function();
		~Cocean_function();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_function); }
	};
}

using namespace n_ocean_function;

#endif
