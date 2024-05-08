#ifndef WARSHIP_CABIN_H
#define WARSHIP_CABIN_H

#include "../object.h"

namespace n_warship_cabin {
	class Cwarship_cabin :public Object
	{
	public:
		Cwarship_cabin();
		~Cwarship_cabin();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cwarship_cabin); }
	};
}

using namespace n_warship_cabin;

#endif
