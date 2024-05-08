#ifndef AIRPLANE_MODE_H
#define AIRPLANE_MODE_H

#include "../object.h"

namespace n_airplane_mode {
	class Cairplane_mode :public Object
	{
	public:
		Cairplane_mode();
		~Cairplane_mode();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cairplane_mode); }
	};
}

using namespace n_airplane_mode;

#endif
