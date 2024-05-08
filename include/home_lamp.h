#ifndef HOME_LAMP_H
#define HOME_LAMP_H

#include "../object.h"

namespace n_home_lamp {
	class Chome_lamp :public Object
	{
	public:
		Chome_lamp();
		~Chome_lamp();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Chome_lamp); }
	};
}

using namespace n_home_lamp;

#endif
