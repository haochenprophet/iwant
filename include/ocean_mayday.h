#ifndef OCEAN_MAYDAY_H
#define OCEAN_MAYDAY_H

#include "../object.h"

namespace n_ocean_mayday {
	class Cocean_mayday :public Object
	{
	public:
		Cocean_mayday();
		~Cocean_mayday();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_mayday); }
	};
}

using namespace n_ocean_mayday;

#endif
