#ifndef MATERIAL_PARTIAL_H
#define MATERIAL_PARTIAL_H

#include "../object.h"

namespace n_material_partial {
	class Cmaterial_partial :public Object
	{
	public:
		Cmaterial_partial();
		~Cmaterial_partial();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cmaterial_partial); }
	};
}

using namespace n_material_partial;

#endif
