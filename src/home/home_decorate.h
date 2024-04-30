#ifndef HOME_DECORATE_H
#define HOME_DECORATE_H

#include "../object.h"

namespace n_home_decorate {
	class Chome_decorate :public Object
	{
	public:
		Chome_decorate();
		~Chome_decorate();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Chome_decorate); }
	};
}

using namespace n_home_decorate;

#endif
