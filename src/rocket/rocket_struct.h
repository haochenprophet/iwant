#ifndef ROCKET_STRUCT_H
#define ROCKET_STRUCT_H

#include "object/object.h"

namespace n_rocket_struct {
	class Crocket_struct :public Object
	{
	public:
		Crocket_struct();
		~Crocket_struct();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Crocket_struct); }
	};
}

using namespace n_rocket_struct;

#endif
