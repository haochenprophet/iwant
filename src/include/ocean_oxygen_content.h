#ifndef OCEAN_OXYGEN_CONTENT_H
#define OCEAN_OXYGEN_CONTENT_H

#include "../object.h"

namespace n_ocean_oxygen_content {
	class Cocean_oxygen_content :public Object
	{
	public:
		Cocean_oxygen_content();
		~Cocean_oxygen_content();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_oxygen_content); }
	};
}

using namespace n_ocean_oxygen_content;

#endif
