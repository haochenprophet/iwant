#ifndef HOME_AUTO_H
#define HOME_AUTO_H

#include "../object.h"

namespace n_home_auto {
	class Chome_auto :public Object
	{
	public:
		Chome_auto();
		~Chome_auto();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Chome_auto); }
	};
}

using namespace n_home_auto;

#endif
