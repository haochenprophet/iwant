#ifndef MATERIAL_NAME_H
#define MATERIAL_NAME_H

#include "../object.h"

namespace n_material_name {
	class Cmaterial_name :public Object
	{
	public:
		Cmaterial_name();
		~Cmaterial_name();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cmaterial_name); }
	};
}

using namespace n_material_name;

#endif
