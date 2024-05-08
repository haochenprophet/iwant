#ifndef ROCKET_ENGINE_H
#define ROCKET_ENGINE_H

#include "../object.h"

namespace n_rocket_engine {
	class Crocket_engine :public Object
	{
	public:
		Crocket_engine();
		~Crocket_engine();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Crocket_engine); }
	};
}

using namespace n_rocket_engine;

#endif
