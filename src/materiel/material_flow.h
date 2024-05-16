#ifndef MATERIAL_FLOW_H
#define MATERIAL_FLOW_H

#include "object/object.h"

namespace n_material_flow {
	class Cmaterial_flow :public Object
	{
	public:
		Cmaterial_flow();
		~Cmaterial_flow();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cmaterial_flow); }
	};
}

using namespace n_material_flow;

#endif
