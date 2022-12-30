#ifndef NEXTAFTER_H
#define NEXTAFTER_H

#include "../object.h"

namespace n_nextafter {
	class Cnextafter :public Object
	{
	public:
		Cnextafter();
		~Cnextafter();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cnextafter); }
	};
}

using namespace n_nextafter;

#endif
