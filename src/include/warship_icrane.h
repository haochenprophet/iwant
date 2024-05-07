#ifndef WARSHIP_ICRANE_H
#define WARSHIP_ICRANE_H

#include "../object.h"

namespace n_warship_icrane {
	class Cwarship_icrane :public Object
	{
	public:
		Cwarship_icrane();
		~Cwarship_icrane();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cwarship_icrane); }
	};
}

using namespace n_warship_icrane;

#endif
