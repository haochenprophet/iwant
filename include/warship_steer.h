#ifndef WARSHIP_STEER_H
#define WARSHIP_STEER_H

#include "../object.h"

namespace n_warship_steer {
	class Cwarship_steer :public Object
	{
	public:
		Cwarship_steer();
		~Cwarship_steer();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cwarship_steer); }
	};
}

using namespace n_warship_steer;

#endif
