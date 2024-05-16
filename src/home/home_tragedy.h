#ifndef HOME_TRAGEDY_H
#define HOME_TRAGEDY_H

#include "object/object.h"

namespace n_home_tragedy {
	class Chome_tragedy :public Object
	{
	public:
		Chome_tragedy();
		~Chome_tragedy();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Chome_tragedy); }
	};
}

using namespace n_home_tragedy;

#endif
