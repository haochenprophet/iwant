#ifndef HOME_STOREROOM_H
#define HOME_STOREROOM_H

#include "../object.h"

namespace n_home_storeroom {
	class Chome_storeroom :public Object
	{
	public:
		Chome_storeroom();
		~Chome_storeroom();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Chome_storeroom); }
	};
}

using namespace n_home_storeroom;

#endif
