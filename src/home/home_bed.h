#ifndef HOME_BED_H
#define HOME_BED_H

#include "object/object.h"

namespace n_home_bed {
	class Chome_bed :public Object
	{
	public:
		Chome_bed();
		~Chome_bed();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Chome_bed); }
	};
}

using namespace n_home_bed;

#endif
