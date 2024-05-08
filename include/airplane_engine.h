#ifndef AIRPLANE_ENGINE_H
#define AIRPLANE_ENGINE_H

#include "../object.h"

namespace n_airplane_engine {
	class Cairplane_engine :public Object
	{
	public:
		Cairplane_engine();
		~Cairplane_engine();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cairplane_engine); }
	};
}

using namespace n_airplane_engine;

#endif
