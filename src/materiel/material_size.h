#ifndef MATERIAL_SIZE_H
#define MATERIAL_SIZE_H

#include "object/object.h"

namespace n_material_size {
	class Cmaterial_size :public Object
	{
	public:
		Cmaterial_size();
		~Cmaterial_size();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cmaterial_size); }
	};
}

using namespace n_material_size;

#endif
