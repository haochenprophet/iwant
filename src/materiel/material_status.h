#ifndef MATERIAL_STATUS_H
#define MATERIAL_STATUS_H

#include "object/object.h"

namespace n_material_status {
	class Cmaterial_status :public Object
	{
	public:
		Cmaterial_status();
		~Cmaterial_status();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cmaterial_status); }
	};
}

using namespace n_material_status;

#endif
