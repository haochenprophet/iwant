#ifndef MATERIAL_ID_H
#define MATERIAL_ID_H

#include "../object.h"

namespace n_material_id {
	class Cmaterial_id :public Object
	{
	public:
		Cmaterial_id();
		~Cmaterial_id();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cmaterial_id); }
	};
}

using namespace n_material_id;

#endif
