#ifndef MATERIAL_UUID_H
#define MATERIAL_UUID_H

#include "../object.h"

namespace n_material_uuid {
	class Cmaterial_uuid :public Object
	{
	public:
		Cmaterial_uuid();
		~Cmaterial_uuid();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cmaterial_uuid); }
	};
}

using namespace n_material_uuid;

#endif
