#ifndef SECURITY_DISTANCE_H
#define SECURITY_DISTANCE_H

#include "object/object.h"

namespace n_security_distance {
	class Csecurity_distance :public Object
	{
	public:
		Csecurity_distance();
		~Csecurity_distance();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_distance); }
	};
}

using namespace n_security_distance;

#endif
