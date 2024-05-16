#ifndef MATERIAL_SERIAL_NUMBER_H
#define MATERIAL_SERIAL_NUMBER_H

#include "object/object.h"

namespace n_material_serial_number {
	class Cmaterial_serial_number :public Object
	{
	public:
		Cmaterial_serial_number();
		~Cmaterial_serial_number();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cmaterial_serial_number); }
	};
}

using namespace n_material_serial_number;

#endif
