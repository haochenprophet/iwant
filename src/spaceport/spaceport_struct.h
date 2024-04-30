#ifndef SPACEPORT_STRUCT_H
#define SPACEPORT_STRUCT_H

#include "../object.h"

namespace n_spaceport_struct {
	class Cspaceport_struct :public Object
	{
	public:
		Cspaceport_struct();
		~Cspaceport_struct();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cspaceport_struct); }
	};
}

using namespace n_spaceport_struct;

#endif
