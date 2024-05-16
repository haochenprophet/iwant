#ifndef DIFFTIME_H
#define DIFFTIME_H

#include "object/object.h"

namespace n_difftime {
	class Cdifftime :public Object
	{
	public:
		Cdifftime();
		~Cdifftime();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cdifftime); }
		static double difftime_c(time_t end, time_t beginning);
	};
}

using namespace n_difftime;

#endif
