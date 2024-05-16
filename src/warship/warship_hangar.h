#ifndef WARSHIP_HANGAR_H
#define WARSHIP_HANGAR_H

#include "object/object.h"

namespace n_warship_hangar {
	class Cwarship_hangar :public Object
	{
	public:
		Cwarship_hangar();
		~Cwarship_hangar();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cwarship_hangar); }
	};
}

using namespace n_warship_hangar;

#endif
