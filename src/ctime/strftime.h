#ifndef STRFTIME_H
#define STRFTIME_H

#include "../object.h"

namespace n_strftime {
	class Cstrftime :public Object
	{
	public:
		Cstrftime();
		~Cstrftime();
		int my_init(void *p=nullptr);
	};
}

using namespace n_strftime;

#endif
