#ifndef LIFE_REST_H
#define LIFE_REST_H

#include "../object.h"

namespace n_life_rest {
	class Clife_rest :public Object
	{
	public:
		Clife_rest();
		~Clife_rest();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Clife_rest); }
	};
}

using namespace n_life_rest;

#endif
