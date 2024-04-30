#ifndef MARS_CONSTRUCT_H
#define MARS_CONSTRUCT_H

#include "../object.h"

namespace n_mars_construct {
	class Cmars_construct :public Object
	{
	public:
		Cmars_construct();
		~Cmars_construct();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cmars_construct); }
	};
}

using namespace n_mars_construct;

#endif
