#ifndef ROCKET_GUIDE_H
#define ROCKET_GUIDE_H

#include "../object.h"

namespace n_rocket_guide {
	class Crocket_guide :public Object
	{
	public:
		Crocket_guide();
		~Crocket_guide();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Crocket_guide); }
	};
}

using namespace n_rocket_guide;

#endif
