#ifndef WARSHIP_TORPEDO_H
#define WARSHIP_TORPEDO_H

#include "../object.h"

namespace n_warship_torpedo {
	class Cwarship_torpedo :public Object
	{
	public:
		Cwarship_torpedo();
		~Cwarship_torpedo();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cwarship_torpedo); }
	};
}

using namespace n_warship_torpedo;

#endif
