#ifndef CMATH_H
#define CMATH_H

#include "object/object.h"

namespace n_cmath {
	class Ccmath :public Object
	{
	public:
		Ccmath();
		~Ccmath();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Ccmath); }
		void add_global_objects(Object* p);
	};
}

using namespace n_cmath;

#endif
