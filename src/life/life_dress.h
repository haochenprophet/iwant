#ifndef LIFE_DRESS_H
#define LIFE_DRESS_H

#include "object/object.h"

namespace n_life_dress {
	class Clife_dress :public Object
	{
	public:
		Clife_dress();
		~Clife_dress();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Clife_dress); }
	};
}

using namespace n_life_dress;

#endif
