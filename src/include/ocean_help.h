#ifndef OCEAN_HELP_H
#define OCEAN_HELP_H

#include "../object.h"

namespace n_ocean_help {
	class Cocean_help :public Object
	{
	public:
		Cocean_help();
		~Cocean_help();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_help); }
	};
}

using namespace n_ocean_help;

#endif
