#ifndef OCEAN_ENVIRONMENT_H
#define OCEAN_ENVIRONMENT_H

#include "../object.h"

namespace n_ocean_environment {
	class Cocean_environment :public Object
	{
	public:
		Cocean_environment();
		~Cocean_environment();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_environment); }
	};
}

using namespace n_ocean_environment;

#endif
