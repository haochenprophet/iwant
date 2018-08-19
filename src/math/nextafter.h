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
	};
}

using namespace n_nextafter;

#endif
