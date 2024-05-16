#ifndef MATERIAL_TIME_H
#define MATERIAL_TIME_H

#include "object/object.h"

namespace n_material_time {
	class Cmaterial_time :public Object
	{
	public:
		Cmaterial_time();
		~Cmaterial_time();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cmaterial_time); }
	};
}

using namespace n_material_time;

#endif
