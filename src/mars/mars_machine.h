#ifndef MARS_MACHINE_H
#define MARS_MACHINE_H

#include "../object.h"

namespace n_mars_machine {
	class Cmars_machine :public Object
	{
	public:
		Cmars_machine();
		~Cmars_machine();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cmars_machine); }
	};
}

using namespace n_mars_machine;

#endif
