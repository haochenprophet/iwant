#ifndef LIFE_READ_H
#define LIFE_READ_H

#include "object/object.h"

namespace n_life_read {
	class Clife_read :public Object
	{
	public:
		Clife_read();
		~Clife_read();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Clife_read); }
	};
}

using namespace n_life_read;

#endif
