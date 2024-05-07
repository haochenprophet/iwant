#ifndef ROCKET_LOAD_H
#define ROCKET_LOAD_H

#include "../object.h"

namespace n_rocket_load {
	class Crocket_load :public Object
	{
	public:
		Crocket_load();
		~Crocket_load();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Crocket_load); }
	};
}

using namespace n_rocket_load;

#endif
