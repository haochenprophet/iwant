#ifndef WARSHIP_ARTILLERY_H
#define WARSHIP_ARTILLERY_H

#include "../object.h"

namespace n_warship_artillery {
	class Cwarship_artillery :public Object
	{
	public:
		Cwarship_artillery();
		~Cwarship_artillery();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cwarship_artillery); }
	};
}

using namespace n_warship_artillery;

#endif
