#ifndef ROCKET_COWLING_H
#define ROCKET_COWLING_H

#include "../object.h"

namespace n_rocket_cowling {
	class Crocket_cowling :public Object
	{
	public:
		Crocket_cowling();
		~Crocket_cowling();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Crocket_cowling); }
	};
}

using namespace n_rocket_cowling;

#endif
