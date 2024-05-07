#ifndef HOME_UPDATE_H
#define HOME_UPDATE_H

#include "../object.h"

namespace n_home_update {
	class Chome_update :public Object
	{
	public:
		Chome_update();
		~Chome_update();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Chome_update); }
	};
}

using namespace n_home_update;

#endif
