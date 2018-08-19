#ifndef DIFFTIME_H
#define DIFFTIME_H

#include "../object.h"

namespace n_difftime {
	class Cdifftime :public Object
	{
	public:
		Cdifftime();
		~Cdifftime();
		int my_init(void *p=nullptr);
	};
}

using namespace n_difftime;

#endif
