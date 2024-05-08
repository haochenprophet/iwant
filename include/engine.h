#ifndef ENGINE_H
#define ENGINE_H

#include "object.h"

namespace n_engine {
	class Cengine :public Object
	{
	public:
		Cengine();
		~Cengine();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cengine); }
	};
}

using namespace n_engine;

#endif
